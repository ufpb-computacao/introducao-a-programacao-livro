#include <stdio.h>
#include <math.h>

void imprime_separador(float nota) {    // <1>
	int i;
	printf("\n");
	for (i = 0; i < (int) lround(nota * 5.0); i++) {
		printf("=");
	}
	printf(" %3.2f / 10.0\n", nota);
	printf("\n");                                              
}

int main () {
	float nota1, nota2, nota3, media; 

	printf("Entre a nota da primeira prova: ");
	scanf("%f", &nota1);

	imprime_separador(nota1);    // <2>

	printf("Entre a nota da segunda prova: ");
	scanf("%f", &nota2);

	imprime_separador(nota2);

	printf("Entre a nota da terceira prova: ");
	scanf("%f", &nota3);

	imprime_separador(nota3);

	media = (nota1 + nota2 + nota3) / 3.0;
	printf("Media: %3.2f\n", media);

	imprime_separador(media);

	return 0;	
}