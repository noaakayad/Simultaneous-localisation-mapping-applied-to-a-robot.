// Fonction qui permet de positionner le robot à droite du mur
float positionnerADroiteDuMur() {
    // Variables pour le contrôle du capteur de distance
    int distance = 0;
    float angle = 0.0;

    // Variables pour la gestion de la direction du robot
    int vitesseMoteurGaucheAvant = 0;
    int vitesseMoteurGaucheArriere = 0;
    int vitesseMoteurDroitAvant = 0;
    int vitesseMoteurDroitArriere = 0;

    // Détecter le mur initial
    distance = mesurerDistance();

    // Variables pour mesurer le temps
    unsigned long debut = millis(); // Temps au début de la boucle
    unsigned long fin = 0; // Temps à la fin de la boucle
    float delta_t = 0.0; // Temps écoulé (en millisecondes) pour compléter la boucle

    // Choix de la vitesse des roues
    float VITESSE_MOTEUR = 100;

    // Tant que le mur est détecté en face du robot, tourner à droite progressivement
    while (distance <= 10.0) {
        // Ajuster la direction du robot pour tourner à droite
        vitesseMoteurGaucheAvant = VITESSE_MOTEUR * 0.8; // Vitesse réduite pour tourner légèrement à droite
        vitesseMoteurGaucheArriere = 0;
        vitesseMoteurDroitAvant = 0;
        vitesseMoteurDroitArriere = -VITESSE_MOTEUR * 0.8; // Vitesse réduite pour tourner légèrement à gauche

        // Contrôler les moteurs pour effectuer la rotation
        controlerMoteurs(vitesseMoteurGaucheAvant, vitesseMoteurGaucheArriere, vitesseMoteurDroitAvant, vitesseMoteurDroitArriere);

        // Mesurer la distance avec le capteur de distance après la rotation
        distance = mesurerDistance();

        // Attendre un court instant avant la prochaine itération
        delay(100);
    }

    // Mesurer le temps écoulé pour compléter la boucle
    fin = millis();
    delta_t = (fin - debut) / 1000.0;

    // Arrêter les moteurs après avoir tourné à droite du mur
    controlerMoteurs(0, 0, 0, 0);

    // Calculer l'angle tourné
    angle = VITESSE_MOTEUR * 0.8 * delta_t;

    return angle;
}
