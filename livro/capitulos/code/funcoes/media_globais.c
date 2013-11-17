#include <stdio.h>

float nota1, nota2, nota3;   // <1>

float calc_media() {
	return (nota1 + nota2 + nota3) / 3.0;  // <2>
}

int main() {
	printf("Entre as três notas: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);  // <3> 

	printf("Media: %f\n", calc_media());

	return 0;
}
