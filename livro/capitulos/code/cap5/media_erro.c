#include <stdio.h>

float calc_media() {
	return (nota1 + nota2 + nota3) / 3.0;  // <1>
}

int main() {
	float nota1, nota2, nota3;

	printf("Entre as três notas: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);

	printf("Media: %f\n", calc_media());

	return 0;
}
