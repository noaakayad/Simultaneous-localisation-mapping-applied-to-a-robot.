void precisionListe(Liste* liste) {
    if (liste != NULL) {
        liste->point->x = 1000.0 * liste->point->x;
        liste->point->y = 1000.0 * liste->point->y;
        precisionListe(liste->suivant);
    } else {
        // Aucune action nécessaire ici
    }
}
