#include <stdio.h>

int main() {
	float nota1, nota2, nota3;

	printf("Entre as três notas: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3); 

	situacao(nota1, nota2, nota3);  // <1>
	return 0; 
}

void situacao(float n1, float n2, float n3) {  // <2>
	float media = (n1 + n2 + n3) / 3.0;

	printf("Media %f, ", media);
	if (media >= 7.0)
		printf("Aluno aprovado\n");
	else if (media < 4.0)
		printf("Aluno reprovado por media\n");
	else
		printf("Aluno na prova final"); 
}


