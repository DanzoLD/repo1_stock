#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Person {
    char name[50];
    int age;
};

enum MenuChoice {
    OPTION_0=1,
    OPTION_1,
    OPTION_2,
};

void displayMenu() {
    printf("\n1. calcule derive\n");
    printf("\n2. boucle repetition\n");
    printf("\n3. information personnelle\n");
}

double calculateDerivative(double coefficient, double exponent, double x) {
    // Calcul de la dérivée d'une fonction polynomiale simple : f(x) = a*x^n
    // La dérivée est donnée par : f'(x) = n*a*x^(n-1)
    return exponent * coefficient * pow(x, exponent - 1);
}

void deriv() {
    double coefficient, exponent, x;

    printf("Entrez le coefficient de la fonction : ");
    scanf("%lf", &coefficient);

    printf("Entrez l'exposant de la fonction : ");
    scanf("%lf", &exponent);

    printf("Entrez la valeur de x pour laquelle vous souhaitez calculer la derivee : ");
    scanf("%lf", &x);

    double derivative = calculateDerivative(coefficient, exponent, x);

    printf("La derivee de la fonction est : %.2lf\n", derivative);
}

// Fonction principale
int main() {
    // Déclaration de variables
    int choice;
    struct Person person;
    char input[50];

    // Affichage du menu
    displayMenu();

    // Saisie de choix utilisateur
    printf("\nChoisissez une option : ");
    scanf("%d", &choice);

    // Utilisation de conditions logiques
    switch (choice) {

    case OPTION_0:
       
        printf("Vous avez choisi l'option pour calculer la derive d'une fonction\n");
        deriv();
        break;

    case OPTION_1:
        
        for (int i = 0; i < 3; ++i) {
            printf("Repetition %d\n", i + 1);
        }
        break;
    case OPTION_2:

        
        printf("Entrez votre nom : ");
        scanf("%s", person.name);
        printf("Entrez votre age : ");
        scanf("%d", &person.age);
        printf("Bienvenue, %s! Vous avez %d ans.\n", person.name, person.age);
        break;
    default:
        printf("Choix non valide\n");
        break;
    }

    printf("Entrez une chaine de caracteres : ");
    scanf("%s", input);
    printf("Vous avez saisi : %s\n", input);

    return 0;
}