#include <stdio.h>

int x = 5;  // <1> 
int y = 7;

void troca_variaveis() {  // <2> 
	int temp = x;
	x = y;
	y = temp;

	printf("Dentro de troca_variaveis: x = %d, y = %d\n", x, y);
}

int main() {
	printf("Antes da troca: x = %d, y = %d\n", x, y);
	troca_variaveis();
	printf("Depois da troca: x = %d, y = %d\n", x, y);
}
