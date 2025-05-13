#include <stdio.h>

void plus_moins(int choix_joueur, int valeur_a_trouver) {
    if (choix_joueur < valeur_a_trouver) {
        printf("plus\n");
    } else if (choix_joueur > valeur_a_trouver) {
        printf("moins\n");
    } else {
        printf("Bingo\n");
    }
}

int main() {
    int valeur_a_trouver = 42; // Vous pouvez choisir n'importe quelle valeur
    int choix_joueur;
    
    printf("Devinez le nombre: ");
    scanf("%d", &choix_joueur);
    
    plus_moins(choix_joueur, valeur_a_trouver);
    
    return 0;
}
