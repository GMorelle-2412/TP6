/*Ecrire deux fonctions qui retourne une valeur entière permettant de savoir si l’entier 
passé en argument est multiple de deux et multiple de trois pour la seconde fonction.
Utiliser ces deux fonctions dans un petit programme qui lit un nombre entier et qui 
précise s’il est pair, multiple de 3 et/ou multiple de 6.*/

#include <stdio.h>
#include <string.h>

int multipleX2(int a){
	float compart = a;
	float division = 2;

	float cal_de_compart = compart / division;
	int cal_n = a / 2;

	if (cal_de_compart != cal_n) {
		return 0;
	}
	return 1;
}

int multipleX3(int a){
	float compart = a;
	float division = 3;

	float cal_de_compart = compart / division;
	int cal_n = a / 3;

	if (cal_de_compart != cal_n) {
		return 0;
	}
	return 1;
}

int main() {
	int valeur = 0;

	printf_s("Entrez un nombre entier : ");
	scanf_s("%d", &valeur);

	int m2 = multipleX2(valeur);
	int m3 = multipleX3(valeur);

	if (m2 == 1){
		printf_s("Le nombre entier %d est pair\n",valeur);
	}else{
		printf_s("Le nombre entier %d n'est pas pair\n", valeur);
	}
	
	if (m3 == 1) {
		printf_s("Le nombre entier %d est divisible par 3\n", valeur);
	}
	else {
		printf_s("Le nombre entier %d n'est divisible par 3\n", valeur);
	}

	float division = 6;

	float cal_de_compart = valeur / division;
	int cal_n = valeur / division;

	if (cal_de_compart != cal_n) {
		printf_s("Le nombre entier %d n'est pas divisible par 6\n", valeur);
	}
	else {
		printf_s("Le nombre entier %d est divisible par 6\n", valeur);
	}
	
	return 0;
}