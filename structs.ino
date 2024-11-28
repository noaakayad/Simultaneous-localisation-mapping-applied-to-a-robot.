// Position du robot
float positionX = 0.0;  // Coordonnée X de la position du robot
float positionY = 0.0;  // Coordonnée Y de la position du robot

// Types implémentés
// Structure représentant un point (x, y) et une valeur booléenne pour le statut de ce point
struct Point {
    float x;       // Coordonnée X du point
    float y;       // Coordonnée Y du point
    bool dec;      // Statut booléen pour indiquer si le point est décélébré ou visité, par exemple
};

// Structure représentant une liste chaînée de points
struct Liste {
    Point* point;    // Pointeur vers un point
    Liste* suivant;  // Pointeur vers le prochain élément de la liste
};

// Déclaration des listes chaînées pour les points sur la carte et les points visités
Liste* listeDePointsCarte = NULL;    // Liste des points sur la carte
Liste* listeDePointsVisite = NULL;   // Liste des points visités
