#include <stdio.h>

int main() {
	int x = 5;
	int y = 7;

	printf("Antes da troca: x = %d, y = %d\n", x, y);

	// troca_variaveis
	int a = x, b = y;
	int temp = a;
	a = b;
	b = temp;
	printf("Dentro de troca_variaveis: a = %d, b = %d\n", a, b);
	// fim de troca_variaveis

	printf("Depois da troca: x = %d, y = %d\n", x, y);
}
