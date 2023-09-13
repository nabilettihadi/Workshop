#include <stdio.h>

int main() {
    int a, b;
    
    // Saisie des deux entiers
    printf("Entrez la valeur de a : ");
    scanf("%d", &a);
    
    printf("Entrez la valeur de b : ");
    scanf("%d", &b);
    
    // Calcul des opérations
    int somme = a + b;
    int difference = a - b;
    int produit = a * b;
    
    // Vérification pour éviter une division par zéro
    if (b != 0) {
        float quotient = (float)a / b; // Utilisation de la conversion en float pour la division
        int reste = a % b;
        
        // Affichage des résultats en format décimal
        printf("a + b = %d\n", somme);
        printf("a - b = %d\n", difference);
        printf("a * b = %d\n", produit);
        printf("a / b = %.2f\n", quotient);
        printf("a %% b = %d\n", reste);
    } else {
        printf("La division par zero n est pas autorisee.\n");
    }
    
    return 0;
}