void faireRotation(float angle) {
    // Convertir l’angle en radians
    float angleEnRadians = angle * PI / 180.0;

    // Contrôler les moteurs pour effectuer la rotation
    controlerMoteurs(VITESSE_MOTEUR, 0, VITESSE_MOTEUR, 0);

    // Attendre jusqu’à ce que la rotation soit terminée
    float dureeRotation = abs(angleEnRadians) / (VITESSE_MOTEUR / distanceEntreRoues);
    delay(dureeRotation);

    // Arrêter les moteurs après la rotation
    controlerMoteurs(0, 0, 0, 0);
}
