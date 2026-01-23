#include <stdio.h>

int absolue(int x) {
	if (x < 0) {
		return(x * -1);
	}
	else {
		return (x);
	}
}

int main() {
	int résultat = absolue(-10);
	printf("%d\n", résultat);

	résultat = absolue(75);
	printf("%d\n", résultat);

}
