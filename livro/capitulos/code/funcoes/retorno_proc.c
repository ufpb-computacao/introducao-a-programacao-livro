#include <stdio.h>

void possui_negativo(float n1, float n2, float n3) {
	if (n1 < 0.0) {
		printf("Numero negativo encontrado!\n");
		return;   // <1>
	}

	if (n2 < 0.0) {
		printf("Numero negativo encontrado!\n");
		return;
	}

	if (n3 < 0.0) {
		printf("Numero negativo encontrado!\n");
		return;
	}

	printf("Nenhum numero negativo encontrado\n");  // <2>
}

int main() {
	float nota1, nota2, nota3;

	printf("Entre a três notas, separadas por espacos: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);

	possui_negativo(nota1, nota2, nota3);

	printf("Media: %f\n", (nota1 + nota2 + nota3) / 3.0);

	return 0;
}
