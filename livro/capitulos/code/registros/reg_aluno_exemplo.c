#include <stdio.h>
#include <string.h>

struct Aluno {
	int matricula;
	char nome[100];
	float nota1;
	float nota2;
};

int main(){
	struct Aluno aluno;
	strncpy(aluno.nome, "Maria Bonita", sizeof(aluno.nome));
	aluno.matricula = 201328;
	aluno.nota1 = 8.0;
	aluno.nota2 = 9.0;

	printf("\n%d %s %1.2f %1.2f", aluno.matricula, aluno.nome,
		aluno.nota1, aluno.nota2);


	getchar();
	return 0;
}
