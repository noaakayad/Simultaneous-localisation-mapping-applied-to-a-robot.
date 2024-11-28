// Structure de point, y compris le statut de visite
struct Point {
    float x;
    float y;
    bool dec;  // 'dec' indicates whether the point is visited or not
};

// Structure de liste, utilisée pour parcourir les points
struct Liste {
    Point* point;   // Pointeur vers un point
    Liste* suivant; // Pointeur vers le suivant
};

// Fonction pour déterminer le point le plus proche non visité
Point determinerPointPlusProche(Liste* listeDePointsVisite, float positionX, float positionY) {
    if (listeDePointsVisite == NULL) {
        return {0.0, 0.0, false}; // Retourner un point par défaut si la liste est vide
    }

    // Initialiser les variables pour le point le plus proche
    float distanceMin = INFINITY;
    Point pointLePlusProche = {0.0, 0.0, false};

    // Parcourir tous les points de la liste et trouver le point le plus proche non visité
    Liste* listeCourante = listeDePointsVisite;
    while (listeCourante != NULL) {
        // Vérifier si le point est non visité
        if (!listeCourante->point->dec) {
            // Calculer la distance entre le point courant et le point actuel
            float distance = sqrt(pow(positionX - listeCourante->point->x, 2) + pow(positionY - listeCourante->point->y, 2));
            
            // Si ce point est plus proche que le précédent, on le garde
            if (distance < distanceMin) {
                distanceMin = distance;
                pointLePlusProche = *(listeCourante->point);
            }
        }
        listeCourante = listeCourante->suivant;
    }

    return pointLePlusProche;  // Retourner le point le plus proche non visité
}
