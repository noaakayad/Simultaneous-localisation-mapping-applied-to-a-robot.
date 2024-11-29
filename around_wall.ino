// Fonction pour longer le mur et mettre à jour la carte
void longerMur() {
    // Se positionner à droite du mur
    float angle = positionnerADroiteDuMur();
    int distance = mesurerDistance();

    // Variables pour la gestion du temps
    unsigned long tempsDebut = millis();
    unsigned long intervalleCapturePoints = 1000; // Intervalle de 1 seconde pour capturer les points

    // Choix de la vitesse des moteurs
    float VITESSE_MOTEUR = 100;

    // Avancer tout droit
    controlerMoteurs(VITESSE_MOTEUR, 0, VITESSE_MOTEUR, 0);

    // Capturer les points pendant le déplacement
    while (distance > 0) {
        // Vérifier si le temps écoulé dépasse l'intervalle de capture des points
        if (millis() - tempsDebut >= intervalleCapturePoints) {
            // Capturer les points
            CapturerPoints();

            // Réinitialiser le temps de début
            tempsDebut = millis();

            // Calculer la distance parcourue pendant l'intervalle de capture des points
            float distanceParcourue = VITESSE_MOTEUR * (intervalleCapturePoints / 1000.0);

            // Mettre à jour la position du robot en fonction de l'angle et de la distance parcourue
            positionX += cos(angle) * distanceParcourue;
            positionY += sin(angle) * distanceParcourue;

            // Mettre le point découvert à true
            Point* pointTrouve = trouverPoint();
            pointTrouve->dec = true;
        }

        // Mettre à jour la distance
        distance = mesurerDistance();
    }

    // Arrêter le robot
    controlerMoteurs(0, 0, 0, 0);

    // Petite pause avant la fin de la fonction
    delay(100);
}
