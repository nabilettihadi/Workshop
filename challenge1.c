#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main ()
{char *prenom ,*nom, sexe;
    prenom = malloc(sizeof(char) * 50);
    nom = malloc(sizeof(char) * 50);
    int age;
    char numeroTelephone[15];

    // Saisie des informations personnelles
    printf("Entrez votre nom : ");
    scanf("%s", nom);

    printf("Entrez votre prenom : ");
    scanf("%s", prenom);

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Entrez votre sexe (M/F) : ");
    scanf(" %c", &sexe);

    printf("Entrez votre numero de telephone : ");
    scanf("%s", numeroTelephone);

    // Affichage des informations personnelles
    printf("\nInformations personnelles :\n");
    printf("Nom : %s\n", nom);
    printf("Prenom : %s\n", prenom);
    printf("Age : %d ans\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Numero de telephone : %s\n", numeroTelephone);

}