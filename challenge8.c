#include <stdio.h>

int main() {
    int nombre;

    // Saisie du nombre entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Affichage de la valeur équivalente en octal et en hexadécimal
    printf("La valeur equivalente en octal est : %o\n", nombre);
    printf("La valeur equivalente en hexadecimal est : %X\n", nombre);

    return 0;
}