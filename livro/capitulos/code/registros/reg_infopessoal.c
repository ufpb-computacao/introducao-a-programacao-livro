#include <stdio.h>

typedef struct {
	long long cep;
	int estado_civil; // 1:Solteiro 2:Casado 3:Viuvo 4:Divorciado
} InformacaoPessoal;

typedef struct {
	int matricula;
	char nome[100];
	float nota1;
	float nota2;
	InformacaoPessoal info_pessoal;
} Aluno;

typedef struct {
	char nome[256];
	long long cpf;
	InformacaoPessoal info_pessoal;
} Cliente;

int main() {
	Aluno a =  {15, "Virgulino da Silva", 9.0f, 10.0f, {58051400, 1}}; //<1>
	Cliente c= {"Maria Bonita", 72779162201, {58051400, 2}}; //<2>

	printf("Aluno: %s %1Ld %d.\n",   a.nome, a.info_pessoal.cep, a.matricula);
	printf("Cliente: %s %1Ld %1Ld.\n", c.nome, c.info_pessoal.cep, c.cpf);

	return 0;
}


