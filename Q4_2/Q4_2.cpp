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
	int i = 0;

	printf("Entrez les valeurs (pas plus de 20 et saisire -1 pour arreter la saisie) : \n");

	while (i < 20){
		scanf_s("%f", &a[i]);
		if (a[i] == -1) {
			sauve = i;
			return sauve;
		}
		i++;
	}
	sauve = i;
	return sauve;
}

float affiche(float* b, int max) {
	printf("Affichage des resultats : \n");
	
	for (int j = 0; j < max; j++) {
		printf_s("%f\n", b[j]);
	}

	return 0;
}

float indice_min(float* tab, int i2) {
	if (tab[i2] > tab[i2 + 1]) {
		
		return tab[i2 + 1];

	}else{
		
		return tab[i2];

	}
}

float trier(float* tab, int i2, int max) {
	for (int j = 0; j < max; j++) {
		for (int i = 0; i < max - 1; i++) {
			if (indice_min (tab, i) != tab[i]){
				i2 = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = i2;
			}
		}
	}

	return 0;
}

int main() {
	float tab[20];
	int i2 = 0;

	int max = Lire(tab);

	indice_min(tab, i2);

	trier(tab, i2, max);

	affiche(tab, max);

	return 0;
}