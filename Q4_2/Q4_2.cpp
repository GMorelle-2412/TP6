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
	int sauve = 0;

	printf("Entrez les valeurs (pas plus de 20 et saisire -1 pour arreter la saisie) : \n");

	for (int i = 0; i < 20; i++){
		
		scanf_s("%f", &a[i]);
		if (a[i] == -1) {
			while (i < 20) {
				a[i] = 0;
				i++;
			}
		}
		sauve++;
	}

	return sauve;
}

float affiche(float* b) {
	printf("Affichage des resultats : \n");
	
	for (int j = 0; j < 20; j++) {
		printf_s("%f\n", b[j]);
	}

	return 0;
}

float indice_min(float* tab, int max) {
	int i = 0;
	int j[1];

	j[0] = tab[0];
	
	while (i < max - 1) {
		if (j[0] > tab [i]){
			j[0] = tab[i];
		}
		i++;
	}

	return j[0];
}

float trier(float* tab, float trie) {
	for (int j = 0; j < 20; j++) {
		for (int i = 0; i < 20 - 1; i++) {
			if (tab[i] > tab[i + 1]){
				trie = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = trie;
			}
		}
	}

	return 0;
}

int main() {
	float tab[20];
	float b[2];

	int max = Lire(tab);

	float trie = indice_min(tab, max);

	trier(tab, trie);

	affiche(tab);

	return 0;
}