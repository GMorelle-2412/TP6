/*Un programme contient la déclaration suivante :
Float liste[8]={1.6,-6.9,9.67,5.90,345,-23.6,78,34.6} ; 
Ecrire une fonction de prototype float min (float* tab) qui renvoie le minimum de la liste.
Ecrire une fonction de prototype float max (float *tab) qui renvoie le maximum de la liste.
Les mettre en œuvre dans main().*/

#include<stdio.h>
#include<string.h>

float min(float* tab) {
	float max = sizeof(tab);
	float sauve = { 0 };

	for (int i = 1; i < max; i++) {

		if (tab[i] < sauve) {
			sauve = tab[i];
		}
	}

	printf("%f\n", sauve);

	return 0;
}

float max(float* tab) {
	float max = sizeof(tab);
	float sauve = {0};

	for (int i = 1; i < max; i++) {
		
		if (tab[i] > sauve) {
			sauve = tab[i];
		}
	}

	printf("%f\n", sauve);

	return 0;
}

int main() {
	float liste[8] = { 1.6, -6.9, 9.67, 5.90, 345, -23.6, 78, 34.6 };

	min(liste);

	max(liste);
}