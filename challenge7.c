#include <stdio.h>

int main() {
    int nombre, inverse;

    // Saisie du nombre entier à trois chiffres
    printf("Entrez un nombre entier a trois chiffres : ");
    scanf("%d", &nombre);

    // Vérification que le nombre a trois chiffres
    if (nombre >= 100 && nombre <= 999) {
        // Calcul de l'inverse en inversant les chiffres
        inverse = (nombre % 10) * 100 + ((nombre / 10) % 10) * 10 + (nombre / 100);

        // Affichage de l'inverse
        printf("L inverse est : %d\n", inverse);
    } else {
        printf("Le nombre n est pas a trois chiffres.\n");
    }

    return 0;
}