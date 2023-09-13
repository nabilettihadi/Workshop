int main() {
    double rayon, circonference;
    const double pi = 3.14159265359; // Valeur de π (pi)

    // Saisie du rayon du cercle
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon);

    // Calcul de la circonférence
    circonference = 2 * pi * rayon;

    // Affichage de la circonférence
    printf("La circonference du cercle est : %.2lf\n", circonference);

    return 0;
}