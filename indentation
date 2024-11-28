#include <NewPing.h>    // Bibliothèque pour les capteurs à ultrasons
#include <iostream>      // Bibliothèque pour l'affichage sur le terminal (principalement pour l'environnement Arduino)
#include <Servo.h>       // Bibliothèque pour contrôler les moteurs à servos
#include <Wire.h>        // Bibliothèque pour la communication I2C (utile pour certains capteurs ou écrans)
#include <cmath>         // Bibliothèque pour les calculs mathématiques (par exemple, racines carrées)
#include <SD.h>          // Bibliothèque pour accéder à la carte SD
#include <Adafruit_ImageReader.h> // Bibliothèque pour la lecture d'images (principalement pour des affichages sur écran)

// Définition des broches pour le capteur à ultrasons
#define TRIGGER_PIN 2    // Broche de déclenchement du capteur
#define ECHO_PIN 3       // Broche de réception du signal

// Définition de la taille maximale de la file d'attente pour les données (SD, sensor data)
#define TAILLE_MAX 250   // Taille maximale de la file d'attente

// Création de l'objet pour la gestion du capteur à ultrasons
NewPing sonar(TRIGGER_PIN, ECHO_PIN); // Déclaration de l'objet NewPing pour contrôler le capteur à ultrasons

// Définition des broches pour les capteurs et les moteurs
const int PIN_Rotation = A0;           // Broche analogique pour le capteur de rotation
const int PIN_SD = A1;                 // Broche pour la carte SD
const int PIN_MOTEUR_GAUCHE_ARRIERE = M1;  // Broche pour le moteur gauche arrière
const int PIN_MOTEUR_GAUCHE_AVANT = M2;    // Broche pour le moteur gauche avant
const int PIN_MOTEUR_DROITE_ARRIERE = M4;  // Broche pour le moteur droit arrière
const int PIN_MOTEUR_DROITE_AVANT = M3;    // Broche pour le moteur droit avant

// Déclaration des moteurs en utilisant la bibliothèque Servo
Servo moteur1;     // Servo pour le moteur gauche avant
Servo moteur2;     // Servo pour le moteur gauche arrière
Servo moteur3;     // Servo pour le moteur droit avant
Servo moteur4;     // Servo pour le moteur droit arrière

Servo rotation_capteur;  // Servo pour capteur de rotation
