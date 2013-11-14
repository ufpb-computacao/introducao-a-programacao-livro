#include <stdio.h>

int possui_negativo(float n1, float n2, float n3) {  // <1>
	if (n1 < 0.0 || n2 < 0.0 || n3 < 0.0)  // <2>
		return 1;  // <3>

	return 0;      // <4>
}

int main() {
	float nota1, nota2, nota3;

	printf("Entre a três notas, separadas por espacos: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);

	if (possui_negativo(nota1, nota2, nota3))
		printf("Nao e' possivel calcular a media, uma ou mais notas sao negativas\n");
	else
		printf("Media: %f\n", (nota1 + nota2 + nota3) / 3.0);

	return 0;
}
