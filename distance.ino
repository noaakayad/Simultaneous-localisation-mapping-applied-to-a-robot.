int mesurerDistance() {
    // Envoyer une onde sonore et recevoir la réponse
    unsigned int deltaT;

    // Envoi de l'onde
    sonar.ping_timer(); // Déclenche l'émission de l'onde

    // Attente de la réception de l'onde
    while (!sonar.check_timer()) {
        // Attendre jusqu'à ce que l'onde soit captée
    }

    // Calcul du temps écoulé (deltaT)
    deltaT = sonar.timer_result();

    // Calculer la distance en utilisant le temps de vol et la vitesse du son
    int distance = deltaT * 340 / 2;

    return distance;
}
