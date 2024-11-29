int** tab = new int*[l];
for (int i = 0; i < l; i++) {
    int* tabc = new int[c];  // Allocation de la ligne
    tab[i] = tabc;           // Assigner la ligne à l[i]
    for (int j = 0; j < c; j++) {
        tab[i][j] = 0;       // Initialiser chaque élément du tableau à 0
    }
}

void tab2dim(Liste_int* liste) {
    if (liste != NULL) {
        // Vérification pour éviter des accès hors limites (assurer que x et y sont dans les bornes)
        if (liste->point->x >= 0 && liste->point->x < l && liste->point->y >= 0 && liste->point->y < c) {
            tab[liste->point->x][liste->point->y] = 1; // Marquer la position dans le tableau
        }
        tab2dim(liste->suivant); // Récursivité sur la liste suivante
    }
}
