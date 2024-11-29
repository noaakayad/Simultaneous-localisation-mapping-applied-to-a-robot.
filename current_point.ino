// Fonction pour trouver le point que le robot visite dans la liste
Point* TrouverPoint(Liste* liste) {
    // Vérification que la liste n'est pas vide
    if (liste == NULL) {
        // Retourner NULL si la liste est vide
        return NULL;
    }

    // Parcourir la liste itérativement pour trouver le point correspondant
    while (liste != NULL) {
        if (liste->point->x == positionX && liste->point->y == positionY) {
            return liste->point; // Retourner le pointeur du point trouvé
        }
        liste = liste->suivant; // Passer au suivant
    }

    // Si aucun point n'a été trouvé, retourner NULL
    return NULL;
}
