// Fonction pour déplacer le robot vers le point cible
void deplacerRobotVersPoint(Point* pointPlusProche) {

    pointPlusProche->dec = true;

    // Calculer la distance et l’angle entre la position actuelle et la destination
    float distance = sqrt(pow(pointPlusProche->x - positionX, 2) + pow(pointPlusProche->y - positionY, 2));
    float angle = atan2(pointPlusProche->y - positionY, pointPlusProche->x - positionX);

    // Variables pour la gestion du temps
    unsigned long tempsDebut = millis();
    unsigned long intervalleCapturePoints = 1000; // Intervalle de 1 seconde pour capturer les points

    // Choix de la vitesse des roues
    float VITESSE_MOTEUR = 100;

    // Avancer vers la destination
    faireRotation(angle);
    controlerMoteurs(VITESSE_MOTEUR, 0, VITESSE_MOTEUR, 0);

    while (distance > 0) {
        // Vérifier si le temps écoulé dépasse l’intervalle de capture des points
        if (millis() - tempsDebut >= intervalleCapturePoints) {
            // Capturer les points
            CapturerPoints();

            // Réinitialiser le temps de début
            tempsDebut = millis();

            // Calculer la distance parcourue pendant l’intervalle de capture des points
            float distanceParcourue = VITESSE_MOTEUR * (intervalleCapturePoints / 1000.0);

            // Mettre à jour la position du robot en fonction de l’angle et de la distance parcourue
            positionX += cos(angle) * distanceParcourue;
            positionY += sin(angle) * distanceParcourue;

            // Mettre à jour la distance restante
            distance -= distanceParcourue;
        }
    }

    // Arrêter les moteurs
    controlerMoteurs(0, 0, 0, 0);

    // Capturer les points une dernière fois
    CapturerPoints();
}
