/*Un programme contient la déclaration suivante :
Int tab[10]={1,2,4,8,16,32,64,128,256,512} ; 
Ecrire une fonction de prototype void affiche (int *t) qui affiche les éléments du tableau, et 
leur position ; la mettre en œuvre dans main().*/
#include <stdio.h>
#include <string.h>

void affiche(int* t) {

	for (int i = 0; i < 10; i++) {
		printf_s("l'element du tableau % d est %d\n", i,t[i]);
	}
}

int main() {
	int tab[10] = { 1,2,4,8,16,32,64,128,256,512 };
	
	affiche(tab);
}