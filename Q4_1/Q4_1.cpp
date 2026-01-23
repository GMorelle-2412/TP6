/*Ecrire une fonction qui calcule le pgcd de deux nombres initialisés dans le programme 
principal par l’utilisateur.
La mettre en œuvre dans main().*/

#include <stdio.h>
#include <string.h>

int pgcd(int a, int b) {
	//algoritme d'euclide
	while (b != 0) {
		int r = a % b; //r c'est le reste de la divivion a / b
		a = b;
		b = r;
	}
	printf_s("%d", a);

	return 0;
}

int main() {
	int pre = 0;
	int deu = 0;

	printf("Entrez le premier nombre : \n");
	scanf_s("%d", &pre);

	printf("Entrez le deuxieme nombre : \n");
	scanf_s("%d", &deu);

	pgcd(pre,deu);
}