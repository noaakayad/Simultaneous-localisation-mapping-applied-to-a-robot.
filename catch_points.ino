// Fonction pour capturer un point et l’ajouter à la file d’attente
void capturerPoint1() {
    // Envoyer une onde sonore et recevoir la réponse
    unsigned int deltaT;

    // Envoi de l’onde
    sonar.ping_timer(); // Déclenche l’émission de l’onde

    // Attente de la réception de l’onde
    while (!sonar.check_timer()) {
        // Attendre jusqu’à ce que l’onde soit captée
    }

    // Calcul du temps de vol (deltaT)
    deltaT = sonar.timer_result();

    // Calculer la distance en utilisant le temps de vol et la vitesse du son
    int distance = deltaT * 340 / 2;

    // Ajout du point dans la liste d’attente
    ajouterPoint(positionX, (positionY + distance), &listeDePointsVisite);
    ajouterPoint(positionX, (positionY + distance), &listeDePointsCarte);
}

void capturerPoint2() {
    rotation_capteur.write(45); // tourner le capteur de 45 degrés vers la droite

    // Envoyer une onde sonore et recevoir la réponse
    unsigned int deltaT;

    // Envoi de l’onde
    sonar.ping_timer(); // Déclenche l’émission de l’onde

    // Attente de la réception de l’onde
    while (!sonar.check_timer()) {
        // Attendre jusqu’à ce que l’onde soit captée
    }

    // Calcul du temps de vol (deltaT)
    deltaT = sonar.timer_result();

    // Calculer la distance en utilisant le temps de vol et la vitesse du son
    int distance = deltaT * 340 / 2;

    // Calcul de la position avec les coordonnées polaires
    float x = positionX + sqrt(distance * distance * (1 - pow(sin(45), 2)));
    float y = positionY + distance * sin(45);

    // Ajout du point dans la liste d’attente
    ajouterPoint(x, y, &listeDePointsVisite);
    ajouterPoint(x, y, &listeDePointsCarte);
}

void capturerPoint3() {
    rotation_capteur.write(45); // tourner le capteur de 45 degrés vers la droite

    // Envoyer une onde sonore et recevoir la réponse
    unsigned int deltaT;

    // Envoi de l’onde
    sonar.ping_timer(); // Déclenche l’émission de l’onde

    // Attente de la réception de l’onde
    while (!sonar.check_timer()) {
        // Attendre jusqu’à ce que l’onde soit captée
    }

    // Calcul du temps de vol (deltaT)
    deltaT = sonar.timer_result();

    // Calculer la distance en utilisant le temps de vol et la vitesse du son
    int distance = deltaT * 340 / 2;

    // Ajout du point dans la liste d’attente
    ajouterPoint(positionX + distance, positionY, &listeDePointsVisite);
    ajouterPoint(positionX + distance, positionY, &listeDePointsCarte);
}

void capturerPoint4() {
    rotation_capteur.write(45); // tourner le capteur de 45 degrés vers la droite

    // Envoyer une onde sonore et recevoir la réponse
    unsigned int deltaT;

    // Envoi de l’onde
    sonar.ping_timer(); // Déclenche l’émission de l’onde

    // Attente de la réception de l’onde
    while (!sonar.check_timer()) {
        // Attendre jusqu’à ce que l’onde soit captée
    }

    // Calcul du temps de vol (deltaT)
    deltaT = sonar.timer_result();

    // Calculer la distance en utilisant le temps de vol et la vitesse du son
    int distance = deltaT * 340 / 2;

    // Calcul de la position avec les coordonnées polaires
    float x = positionX + sqrt(distance * distance * (1 - pow(sin(45), 2)));
    float y = positionY - distance * sin(45);

    // Ajout du point dans la liste d’attente
    ajouterPoint(x, y, &listeDePointsVisite);
    ajouterPoint(x, y, &listeDePointsCarte);
}

void capturerPoint5() {
    rotation_capteur.write(45); // tourner le capteur de 45 degrés vers la droite

    // Envoyer une onde sonore et recevoir la réponse
    unsigned int deltaT;

    // Envoi de l’onde
    sonar.ping_timer(); // Déclenche l’émission de l’onde

    // Attente de la réception de l’onde
    while (!sonar.check_timer()) {
        // Attendre jusqu’à ce que l’onde soit captée
    }

    // Calcul du temps de vol (deltaT)
    deltaT = sonar.timer_result();

    // Calculer la distance en utilisant le temps de vol et la vitesse du son
    int distance = deltaT * 340 / 2;

    // Ajout du point dans la liste d’attente
    ajouterPoint(positionX, (positionY - distance), &listeDePointsVisite);
    ajouterPoint(positionX, (positionY - distance), &listeDePointsCarte);
}

void capturerPoint6() {
    rotation_capteur.write(45); // tourner le capteur de 45 degrés vers la droite

    // Envoyer une onde sonore et recevoir la réponse
    unsigned int deltaT;

    // Envoi de l’onde
    sonar.ping_timer(); // Déclenche l’émission de l’onde

    // Attente de la réception de l’onde
    while (!sonar.check_timer()) {
        // Attendre jusqu’à ce que l’onde soit captée
    }

    // Calcul du temps de vol (deltaT)
    deltaT = sonar.timer_result();

    // Calculer la distance en utilisant le temps de vol et la vitesse du son
    int distance = deltaT * 340 / 2;

    // Calcul de la position avec les coordonnées polaires
    float x = positionX - distance * sin(45);
    float y = positionY - sqrt(distance * distance * (1 - pow(sin(45), 2)));

    // Ajout du point dans la liste d’attente
    ajouterPoint(x, y, &listeDePointsVisite);
    ajouterPoint(x, y, &listeDePointsCarte);
}

void capturerPoint7() {
    rotation_capteur.write(45); // tourner le capteur de 45 degrés vers la droite

    // Envoyer une onde sonore et recevoir la réponse
    unsigned int deltaT;

    // Envoi de l’onde
    sonar.ping_timer(); // Déclenche l’émission de l’onde

    // Attente de la réception de l’onde
    while (!sonar.check_timer()) {
        // Attendre jusqu’à ce que l’onde soit captée
    }

    // Calcul du temps de vol (deltaT)
    deltaT = sonar.timer_result();

    // Calculer la distance en utilisant le temps de vol et la vitesse du son
    int distance = deltaT * 340 / 2;

    // Ajout du point dans la liste d’attente
    ajouterPoint(positionX - distance, positionY, &listeDePointsVisite);
    ajouterPoint(positionX - distance, positionY, &listeDePointsCarte);
}

void capturerPoint8() {
    rotation_capteur.write(45); // tourner le capteur de 45 degrés vers la droite

    // Envoyer une onde sonore et recevoir la réponse
    unsigned int deltaT;

    // Envoi de l’onde
    sonar.ping_timer(); // Déclenche l’émission de l’onde

    // Attente de la réception de l’onde
    while (!sonar.check_timer()) {
        // Attendre jusqu’à ce que l’onde soit captée
    }

    // Calcul du temps de vol (deltaT)
    deltaT = sonar.timer_result();

    // Calculer la distance en utilisant le temps de vol et la vitesse du son
    int distance = deltaT * 340 / 2;

    // Calcul de la position avec les coordonnées polaires
    float x = positionX - sqrt(distance * distance * (1 - pow(sin(45), 2)));
    float y = positionY + distance * sin(45);

    // Ajout du point dans la liste d’attente
    ajouterPoint(x, y, &listeDePointsVisite);
    ajouterPoint(x, y, &listeDePointsCarte);

    // Remettre le capteur à 0 degré
    rotation_capteur.write(-315);
}

// Capter les 8 points
void capturerPoints() {
    capturerPoint1();
    capturerPoint2();
    capturerPoint3();
    capturerPoint4();
    capturerPoint5();
    capturerPoint6();
    capturerPoint7();
    capturerPoint8();
}
