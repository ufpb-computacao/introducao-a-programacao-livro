#include <stdio.h>

struct Aluno {
	char nome[100];
	int matricula;
	float nota1 ;
	float nota2;
};

#define QUANTIDADE_DE_ALUNOS 3

int main(){
	struct Aluno alunos[QUANTIDADE_DE_ALUNOS];
	float media;

	printf("Dados do aluno: nome(sem espacos), matricula, nota1, nota2\n");
	for(int i=0; (i < QUANTIDADE_DE_ALUNOS); i++){
		printf("\nInforme os dados do aluno(%i): ",i+1);
		scanf("%s %i %f %f",alunos[i].nome, &alunos[i].matricula,
			&alunos[i].nota1, &alunos[i].nota2);
	}

	printf("\nMatricula\tNome\tMedia\n");
	for(int i=0; (i < QUANTIDADE_DE_ALUNOS); i++){
		media = (alunos[i].nota1 + alunos[i].nota2)/2;
		printf("%i\t%s\t%1.2f\n",alunos[i].matricula,alunos[i].nome,media);
	}

	getchar();
	return 0;
}
