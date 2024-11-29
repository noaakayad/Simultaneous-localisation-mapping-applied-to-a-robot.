void loop() {
    // Capturer les points et les ajouter aux listes
    capturerPoints(); 

    // Determiner le point le plus proche du robot
    Point* plusProche = determinerPointPlusProche(); 
    if (plusProche == NULL) {
        // Si aucun point n'a été trouvé, on peut terminer ou ignorer cette itération.
        return; 
    }

    // Déplacer le robot vers ce point
    deplacerRobotVersPoint(plusProche);

    // Longuer le mur auquel appartient ce point et recapturer les points pendant le déplacement
    longerMur();

    // Dessiner la carte
    precisionListe(listeDePointsCarte);  // Mettre à jour la liste des points

    // Convertir la liste de points flottants en liste d'entiers
    Liste_int* vraiListe = floatListe_to_intListe(liste);
    if (vraiListe == NULL) {
        Serial.println("Erreur lors de la conversion de la liste");
        return;  // Gérer l'échec de la conversion
    }

    // Générer l'image du tableau avec les points
    int** tableau = tab2dim(vraiListe);  // Assurer que tab2dim retourne un tableau valide
    genererImageTableau(tableau, l, c);  // Générer l'image de la carte
}
