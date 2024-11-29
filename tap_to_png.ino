#include <Adafruit_ImageReader.h>
#include <SD.h>

void genererImageTableau(int** tableau, int lignes, int colonnes) {
    // Créer une image en mémoire, ici on suppose que tu utilises Adafruit_Image
    // Assure-toi que Adafruit_Image est bien une classe compatible avec cette opération
    Adafruit_Image image = Adafruit_Image(lignes, colonnes);

    // Parcourir le tableau et définir les pixels de l'image
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            int caseValue = tableau[i][j];
            if (caseValue == 1) {
                image.setPixel(i, j, 0);  // Noir
            } else {
                image.setPixel(i, j, 255); // Blanc
            }
        }
    }

    // Créer un nom de fichier unique basé sur l'horodatage
    char filename[13];
    sprintf(filename, "%lu.bmp", millis());

    // Sauvegarder l'image dans la carte SD
    if (SD.begin()) {
        File file = SD.open(filename, FILE_WRITE);
        if (file) {
            // Si tu utilises BMP, on doit sauvegarder sous ce format
            Adafruit_ImageReader::drawBMP(file, image); // Cette méthode nécessite l'objet image correct
            file.close();
            Serial.println("Image enregistrée avec succès.");
        } else {
            Serial.println("Erreur lors de l’ouverture du fichier.");
        }
    } else {
        Serial.println("Erreur lors de l’initialisation de la carte SD.");
    }
}
