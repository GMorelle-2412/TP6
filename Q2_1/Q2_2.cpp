/*Question 2:
Ecrire une fonction mot_de_passe permettant de saisir dans une chaîne de caractères passée
en argument un mot de passe. Pour que ce mot de passe soit gardé secret, vous ferez en sorte
qu’à chaque appui sur une touche, on fasse apparaître une étoile.
Dans le programme principal, vous appellerez la fonction mot de passe puis vous afficherez le
mot de passe réel.
NB : Utiliser la fonction getch() permet de lire la valeur à stocker dans la chaîne.
Pour finir la saisie, appuyez sur la touche « ENTREE », qui possède le code ASCII 13.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

char mot_de_passe(char* a) {
	
	int i = 0;
	char choix = 0; 

	/*saisie cacher*/
	printf(" Entrez le mot de passe : ");

	while (choix != '\r') {//'\r' = touche entrez
		choix = _getch();

		a[i] = choix;

		printf("*");

		i++;
	}

	printf_s("\n Votre mot de passe reel est :");

	/*afficher*/
	for (int j = 0; j < i; j++) {
		printf_s("%c", a[j]);
	}

	return 0; 
}

int main() {
	char affiche[100];
		
	mot_de_passe(affiche);
}