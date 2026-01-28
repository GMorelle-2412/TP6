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
#include<string.h>

float Lire(float* a) {
	float sauve[20];

	printf("Entrez les valeurs (pas plus de 20) : \n");

	for (int i = 0; i < 20; i++) {
		scanf_s("%f", &a[i]);
	}

	printf("\n");

	return 0;
}

float affiche(float* b) {
	printf("Affichage des resultats : \n");

	for (int i = 0; i < 20; i++) {
		printf_s("%f\n",b[i]);
	}
	
	printf_s("\n");

	return 0;
}

float indice_min(float* tab, int i, float* j) {
	i = 0;
	j[0] = tab[0];
	
	while (i < 20) {
		if (j[0] > tab [i]){
			j[0] = tab[i];
		}
		i++;
	}

	return j[0];
}

float trier(float a) {

	return 0;
}

int main() {
	float tab[20];
	int a = 0;
	float b[2];

	Lire(tab);
	affiche(tab);
	float trie = indice_min(tab, a, b);
	printf_s("La valeur la plus base est : %f\n",b[0]);
	trier(trie);
}