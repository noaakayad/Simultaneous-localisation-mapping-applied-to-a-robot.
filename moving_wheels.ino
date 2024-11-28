void controlerMoteurs(int vitesseMoteurGaucheAvant, int vitesseMoteurGaucheArriere, int vitesseMoteurDroitAvant, int vitesseMoteurDroitArriere) {
    // Contrôler le moteur gauche avant
    if (vitesseMoteurGaucheAvant > 0) {
        digitalWrite(PIN_MOTEUR_GAUCHE_AVANT, HIGH);
        digitalWrite(PIN_MOTEUR_GAUCHE_ARRIERE, LOW);
        analogWrite(PIN_MOTEUR_GAUCHE_AVANT, vitesseMoteurGaucheAvant);
    } else if (vitesseMoteurGaucheAvant < 0) {
        digitalWrite(PIN_MOTEUR_GAUCHE_AVANT, LOW);
        digitalWrite(PIN_MOTEUR_GAUCHE_ARRIERE, HIGH);
        analogWrite(PIN_MOTEUR_GAUCHE_AVANT, abs(vitesseMoteurGaucheAvant));
    } else {
        digitalWrite(PIN_MOTEUR_GAUCHE_AVANT, LOW);
        digitalWrite(PIN_MOTEUR_GAUCHE_ARRIERE, LOW);
    }

    // Contrôler le moteur gauche arrière
    if (vitesseMoteurGaucheArriere > 0) {
        digitalWrite(PIN_MOTEUR_GAUCHE_ARRIERE, HIGH);
        digitalWrite(PIN_MOTEUR_GAUCHE_AVANT, LOW);
        analogWrite(PIN_MOTEUR_GAUCHE_ARRIERE, vitesseMoteurGaucheArriere);
    } else if (vitesseMoteurGaucheArriere < 0) {
        digitalWrite(PIN_MOTEUR_GAUCHE_ARRIERE, LOW);
        digitalWrite(PIN_MOTEUR_GAUCHE_AVANT, HIGH);
        analogWrite(PIN_MOTEUR_GAUCHE_ARRIERE, abs(vitesseMoteurGaucheArriere));
    } else {
        digitalWrite(PIN_MOTEUR_GAUCHE_ARRIERE, LOW);
        digitalWrite(PIN_MOTEUR_GAUCHE_AVANT, LOW);
    }

    // Contrôler le moteur droit avant
    if (vitesseMoteurDroitAvant > 0) {
        digitalWrite(PIN_MOTEUR_DROIT_AVANT, HIGH);
        digitalWrite(PIN_MOTEUR_DROIT_ARRIERE, LOW);
        analogWrite(PIN_MOTEUR_DROIT_AVANT, vitesseMoteurDroitAvant);
    } else if (vitesseMoteurDroitAvant < 0) {
        digitalWrite(PIN_MOTEUR_DROIT_AVANT, LOW);
        digitalWrite(PIN_MOTEUR_DROIT_ARRIERE, HIGH);
        analogWrite(PIN_MOTEUR_DROIT_AVANT, abs(vitesseMoteurDroitAvant));
    } else {
        digitalWrite(PIN_MOTEUR_DROIT_AVANT, LOW);
        digitalWrite(PIN_MOTEUR_DROIT_ARRIERE, LOW);
    }

    // Contrôler le moteur droit arrière
    if (vitesseMoteurDroitArriere > 0) {
        digitalWrite(PIN_MOTEUR_DROIT_ARRIERE, HIGH);
        digitalWrite(PIN_MOTEUR_DROIT_AVANT, LOW);
        analogWrite(PIN_MOTEUR_DROIT_ARRIERE, vitesseMoteurDroitArriere);
    } else if (vitesseMoteurDroitArriere < 0) {
        digitalWrite(PIN_MOTEUR_DROIT_ARRIERE, LOW);
        digitalWrite(PIN_MOTEUR_DROIT_AVANT, HIGH);
        analogWrite(PIN_MOTEUR_DROIT_ARRIERE, abs(vitesseMoteurDroitArriere));
    } else {
        digitalWrite(PIN_MOTEUR_DROIT_ARRIERE, LOW);
        digitalWrite(PIN_MOTEUR_DROIT_AVANT, LOW);
    }
}
