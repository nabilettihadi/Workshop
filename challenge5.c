#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    double distance;

    // Saisie des coordonnées des deux points
    printf("Entrez les coordonnees du premier point (x1 y1) : ");
    scanf("%lf %lf", &x1, &y1);

    printf("Entrez les coordonnees du deuxieme point (x2 y2) : ");
    scanf("%lf %lf", &x2, &y2);

    // Calcul de la distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Affichage de la distance
    printf("La distance entre les deux points est : %.2lf\n", distance);

    return 0;
}