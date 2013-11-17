#include <stdio.h>

float calc_media(float n1, float n2, float n3) {
	return (n1 + n2 + n3) / 3.0;
}

int main() {
	float nota1, nota2, nota3;

	printf("Entre as três notas: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);

	printf("Media: %f\n", calc_media(nota1, nota2, nota3));

	return 0;
}
