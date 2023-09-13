#include<stdio.h>
#include<stdlib.h>
void main ()
{char *prenom ,*nom, sexe;
    prenom = malloc(sizeof(char) * 50);
    nom = malloc(sizeof(char) * 50);
int age,tel;


printf("Entrer votre prenom:");
scanf("%s",prenom);

printf("Entrer votre nom:");
scanf("%s",nom);

printf("Entrer votre sexe F:(feminin) / M:(Masculin)");
scanf("%c",sexe);

printf("Entrer votre age:");
scanf("%d",&age);

printf("Entrer votre numero de telephone:");
scanf("%d",&tel);




printf("Informations personnelles:\n");
printf("Prenom:%s\n",prenom);
printf("nom:%s\n",nom);
printf("CIN:%c\n",sexe);
printf("Age:%d\n",age);
printf("Age:%d\n",tel);


}