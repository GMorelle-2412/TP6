/*Ecrire une fonction de prototype « void inverse(char *ch) » qui permette de convertir un 
texte, c’est à dire qui inverse le contenu d’une chaine de caractères. la mettre en œuvre 
dans main().
Ex : 
il fait beau va donner uaeb tiaf li*/

#include <stdio.h>
#include <string.h>

void inverse(char* ch) {
    int max = strlen(ch);

    // Affichage inversé
    for (int i = max - 1; i >= 0; i--) {
        printf("%c", ch[i]);
    }
}

int main() {
    char tab[100];

    printf("entrez le texte a inverser : ");
    fgets(tab, 100, stdin);

    inverse(tab);
}