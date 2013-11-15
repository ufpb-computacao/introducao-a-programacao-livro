#include <stdio.h>

void troca_variaveis(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int x = 5;
	int y = 7;

	printf("Antes da troca: x = %d, y = %d\n", x, y);
	troca_variaveis(x, y);
	printf("Depois da troca: x = %d, y = %d\n", x, y);
}
