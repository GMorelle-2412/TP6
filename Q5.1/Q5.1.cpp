/*Ecrire une fonction qui calcule n ! c'est-à-dire : n != n*(n-1)*(n-2)*…3*2*1. avec n>=0 et 
0 !=1
Avec n unsigned int passé en paramètre et initialisé dans le programme principal par 
l’utilisateur.*/

#include <stdio.h>

unsigned int factorielle(unsigned int n) {
	unsigned int sauve = n;

	sauve = sauve - 1;

	if (n == 0) {
		return 1;
	}

	while (sauve != 0) {

		n *= sauve;

		sauve = sauve - 1;
	}
	return n;
}


int main() {
	unsigned int n = 0;

	printf("Entrez le nombre : \n");
	scanf_s("%u", &n);

	unsigned int resultat = factorielle(n);

	printf_s("%u",resultat);

	return 0;
}