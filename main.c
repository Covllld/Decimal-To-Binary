/*Sert a corriger le probleme du Scanf*/#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Fonction pour convertir un nombre en binaire
void convertirEnBinaire(int nombre) {
    if (nombre == 0) {
        printf("0");
        return;
    }

    int bits[32]; // Tableau pour stocker les bits
    int i = 0;

    // Boucle pour déterminer les bits
    while (nombre > 0) {
        bits[i] = nombre % 2; // Stocke le reste de la division par 2
        nombre /= 2; // Divise le nombre par 2
        i++;
    }

    // Affichage du nombre en binaire (à l'envers)
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
}

int main() {
    int nombre;

    printf("Entrez un nombre decimal: ");
    scanf("%d", &nombre);

    printf("Le nombre %d en binaire est: ", nombre);
    convertirEnBinaire(nombre);
    printf("\n");

    return 0;
}
