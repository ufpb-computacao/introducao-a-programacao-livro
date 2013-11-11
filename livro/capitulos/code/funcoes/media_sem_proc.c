#include <stdio.h>

int main () {
	float nota1, nota2, nota3, media; 

	printf("Entre a nota da primeira prova: ");
	scanf("%f", &nota1);

	printf("\n");
	printf("=============================================\n");
	printf("\n");

	printf("Entre a nota da segunda prova: ");
	scanf("%f", &nota2);

	printf("\n");
	printf("=============================================\n");
	printf("\n");

	printf("Entre a nota da terceira prova: ");
	scanf("%f", &nota3);

	printf("\n");
	printf("=============================================\n");
	printf("\n");

	media = (nota1 + nota2 + nota3) / 3.0;
	printf("Media: %f\n", media);

	return 0;	
}