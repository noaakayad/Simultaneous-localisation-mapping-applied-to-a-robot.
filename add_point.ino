void ajouterPoint(float x, float y, Liste* liste) {
    if (liste->suivant == NULL) {
        Point newpts = new Point;
        newpts.x = x;
        newpts.y = y;
        newpts.dec = false;

        Liste* newlist = new Liste;
        newlist->point = newpts;
        newlist->suivant = NULL;

        liste->suivant = newlist;
    } else {
        ajouterPoint(x, y, liste->suivant);
    }
}
