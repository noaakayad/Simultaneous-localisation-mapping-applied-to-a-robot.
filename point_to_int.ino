struct Point_int {
    int x;
    int y;
};

struct Liste_int {
    Point_int* point;
    Liste_int* suivant;
};

Liste_int* floatListe_to_intListe(Liste* liste) {
    Liste_int* newliste = new Liste_int;
    if (liste != NULL) {
        Point_int* newpoint = new Point_int;
        newpoint->x = int(liste->point->x);
        newpoint->y = int(liste->point->y);
        newliste->point = newpoint;
        newliste->suivant = floatListe_to_intListe(liste->suivant);
    } else {
        newliste->suivant = NULL;
    }
    return newliste;
}
