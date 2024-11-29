Point* currentPointMin = new Point;
currentPointMin->x = listeDePointsCarte->point->x;
currentPointMin->y = listeDePointsCarte->point->y;

void pointPlusEnBas(Liste_int* liste) {
    if (liste != NULL) {
        if (liste->point->x < currentPointMin->x) {
            currentPointMin->x = liste->point->x;
        }
        // Appel récursif pour traverser la liste
        pointPlusEnBas(liste->suivant);
    }
}

void pointPlusGauche(Liste_int* liste) {
    if (liste != NULL) {
        if (liste->point->y < currentPointMin->y) {
            currentPointMin->y = liste->point->y;
        }
        // Appel récursif pour traverser la liste
        pointPlusGauche(liste->suivant);
    }
}

pointPlusGauche(&listeDePointCarte);
pointPlusEnBas(&listeDePointCarte);

Point* currentPointMax = new Point;
currentPointMax->x = listeDePointsCarte->point->x;
currentPointMax->y = listeDePointsCarte->point->y;

void pointPlusEnHaut(Liste_int* liste) {
    if (liste != NULL) {
        if (liste->point->x > currentPointMax->x) {
            currentPointMax->x = liste->point->x;
        }
        // Appel récursif pour traverser la liste
        pointPlusEnHaut(liste->suivant);
    }
}

void pointPlusDroite(Liste_int* liste) {
    if (liste != NULL) {
        if (liste->point->y > currentPointMax->y) {
            currentPointMax->y = liste->point->y;
        }
        // Appel récursif pour traverser la liste
        pointPlusDroite(liste->suivant);
    }
}

pointPlusDroite(&listeDePointCarte);
pointPlusEnHaut(&listeDePointCarte);

// Calcul des dimensions
int l = currentPointMax->y - currentPointMin->y;
int c = currentPointMax->x - currentPointMin->x;
