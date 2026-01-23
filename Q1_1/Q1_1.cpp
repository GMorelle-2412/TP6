/*Ecrire une fonction de prototype int puissance(int a, int b) qui calcule, a puissance b, a et b 
étant des entiers et qui renvoie le résultat au programme appelant.
Dans main(), demandez à l’utilisateur d’entrer 2 valeurs x et y, puis grâce à la fonction 
puissance vous calculerez xpuissy et vous afficherez le résultat obtenu .*/

#include <stdio.h>

int puissance(int a, int b) {
	if (b < 0) {
		printf("Ne pas entrer de puissance negative.\n");
		return 0; 
	}

	if (b == 0) {
		return 1;
	}

	int resultat = 1;
	for (int i = 0; i < b; i++) {
		resultat *= a;
	}

	return resultat;
}

int main() {
	//variable
	int x = 0;
	int y = 0;

	//saisie
	printf_s("Entrez un nombre : ");
	scanf_s("%d", &x);

	printf_s("Entrez la puissance (ne pas entrez de puissance negatif) : ");
	scanf_s("%d", &y);

	//appeller
	int xpuissy = puissance(x, y);

	//afficher
	printf("%d", xpuissy);
}

