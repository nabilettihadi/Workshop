#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float temperatureFahrenheit, temperatureCelsius;
    char *sensation;
    sensation= malloc(20);
    // Saisie de la température en Fahrenheit
    printf("Entrez la temperature en Fahrenheit : ");
    scanf("%f", &temperatureFahrenheit);

    // Conversion en degrés Celsius
    temperatureCelsius = (temperatureFahrenheit - 32) / 1.8;

    // Détermination de la sensation
    if (temperatureCelsius < 0) {
        strcpy(sensation, "Tres froid");
    } else if (temperatureCelsius < 10) {
        strcpy(sensation, "Froid");
    } else if (temperatureCelsius < 25) {
        strcpy(sensation, "Chaud");
    } else {
        strcpy(sensation, "Tres chaud");
    }

    // Affichage de la température en Celsius et de la sensation
    printf("La temperature en Celsius est : %.2f C\n", temperatureCelsius);
    printf("Sensation : %s\n", sensation);

    return 0;
}