#include <stdio.h>

int main() {
    float a, b, c, d;
    float somme, moyenne;

    // Saisie des quatre nombres
    printf("Entrez le premier nombre : ");
    scanf("%f", &a);

    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);

    printf("Entrez le troisième nombre : ");
    scanf("%f", &c);

    printf("Entrez le quatrième nombre : ");
    scanf("%f", &d);

    // Calcul de la somme
    somme = a + b + c + d;

    // Calcul de la moyenne
    moyenne = somme / 4;

    // Affichage de la somme et de la moyenne
    printf("La somme des quatre nombres est : %.2f\n", somme);
    printf("La moyenne des quatre nombres est : %.2f\n", moyenne);

    return 0;
}