#include <stdio.h>

int puiss(int x, int y) {

	int sauve_x = x;
	if (y == 0 ) {
		return 1;
	}
	else if(y < 0){
		return 0;
	}
	else {
		for (int i = 1; i < y; i++) {
			sauve_x = sauve_x * x;
		}
		return sauve_x;
	}

	
}

int main(int argc, char** argv) {
	int résultat = puiss(7, 3);
	printf("%d\n", résultat);

	résultat = puiss(9, 0);
	printf("%d\n", résultat);

	résultat = puiss(6, -5);
	printf("%d\n", résultat);
}
