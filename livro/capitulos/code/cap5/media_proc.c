#include <stdio.h>

void imprime_separador() {    // <1>
	printf("\n");                                              // <2>
	printf("=============================================\n"); // <2>
	printf("\n");                                              // <2>
}

int main () {
	float nota1, nota2, nota3, media; 

	printf("Entre a nota da primeira prova: ");
	scanf("%f", &nota1);

	imprime_separador();    // <3>

	printf("Entre a nota da segunda prova: ");
	scanf("%f", &nota2);

	imprime_separador();

	printf("Entre a nota da terceira prova: ");
	scanf("%f", &nota3);

	imprime_separador();

	media = (nota1 + nota2 + nota3) / 3.0;
	printf("Media: %f\n", media);

	return 0;	
}