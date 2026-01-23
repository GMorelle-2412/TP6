/*Il s'agit d'écrire quatre fonctions.

La première, « lire » permet d’entrer les valeurs dans un tableau dont la taille 
ne doit pas dépasser 20 éléments. 

La seconde, affiche, permet d’afficher le tableau 
trié. 

La troisième, « indice_min », doit, étant donnés deux indices d'un tableau, 
indiquer celui en lequel est rangée la plus petite donnée.

La quatrième, « trier », doit obligatoirement utiliser la fonction indice_min pour trier le 
tableau. Pour cela, on utilisera un "tri à bulle".*/

#include<stdio.h>


float Lire(float* a) {
	int i = 0;
	float sauve[20];

	printf("Entrez les valeurs (pas plus de 20) : ");
	
	while (i < 20) {
		scanf_s("%f\n", &a[i]);

		if (a[i] == -1) {
			break;
		}
		
		i++;
	}
	return 0;
}

int affiche(float*b) {
	
	for (int i = 0; i < 20; i++) {
		printf_s("%f\n",b[i]);
	}
	
	return 0;
}

int main() {
	float tab[20];

	Lire(tab);
	affiche(tab);
}