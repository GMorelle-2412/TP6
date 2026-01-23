/*Ecrire une fonction transforme qui permet de transformer les caractères minuscules en 
majuscule dans une chaine passée en argument.
La chaine modifiée sera affichée dans le programme principal, ainsi que le nombre de lettres 
qui ont subies une modification.*/

#include<stdio.h>
#include <string.h>

int maj(char* a) {
	printf_s("Entrez le text : ");
	fgets(a, 100, stdin);

	int max = strlen(a);
	int conteur = 0;

	//Convertion MAJ
	for (int i = 0; i < max; i++) {
		if (a[i] >= 'a' && a[i] <= 'z') {
			a[i] -= 32;
			conteur++;
		}
	}
	return conteur;
}

int main(){
	char text[100];
	int compteur = maj(text);
	
	printf_s("%s",text);
	printf_s("%d",compteur);
}