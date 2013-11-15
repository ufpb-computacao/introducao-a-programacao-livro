#include <stdio.h>

void troca_variaveis(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	printf("Dentro de troca_variaveis: a = %d, b = %d\n", *a, *b);
}

int main() {
	int x = 5;
	int y = 7;

	printf("Antes da troca: x = %d, y = %d\n", x, y);
	troca_variaveis(&x, &y);
	printf("Depois da troca: x = %d, y = %d\n", x, y);
}
