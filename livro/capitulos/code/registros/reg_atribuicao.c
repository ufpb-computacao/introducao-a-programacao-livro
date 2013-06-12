#include <stdio.h>

typedef struct {
	int matricula; // <1>
	char nome[100];// <1>
	float nota1;   // <1>
	float nota2;   // <1>
} Aluno;

typedef struct {
	char nome[256];// <2>
	long long cpf; // <2>
} Cliente;

int main() {
	Aluno a =  {15, "Virgulino da Silva", 9.0f, 10.0f}; // <1>
	Cliente c = {"Maria Bonita", 72779162201}; // <2>

	printf("Aluno: %s Mat.: %d Nota1: %1.2f Nota2: %1.2f\n", 
		a.nome, a.matricula, a.nota1, a.nota2);
	printf("Cliente: %s CPF: %1Ld\n", c.nome,c.cpf);

	return 0;
}


