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

char mot_de_passe(char* a) {
	char MotDePasse[100];

	/*saisie cacher*/

	

	/*printf("Entrez le mot de passe : ");*/
	/*fgets(MotDePasse, 100, stdin);*/
	

	/*afficher*/
	printf_s("Votre mot de passe reel est : %s", &MotDePasse);

	return 0; 
}

int main() {
	char affiche[100];
		
	mot_de_passe(affiche);
}