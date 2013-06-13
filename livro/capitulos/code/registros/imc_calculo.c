#include <stdio.h>

typedef struct{
	char  nome[100];
	char  sexo; // 'm': masculino, 'f': femino
	float peso;
	float altura;
	long long cpf;
} Pessoa;

#define QUANTIDADE_DE_PESSOAS 3

int main(){
	Pessoa pessoas[QUANTIDADE_DE_PESSOAS];

	printf("Campos: nome, altura, peso, cpf, sexo\n");
	for(int i=0; (i < QUANTIDADE_DE_PESSOAS); i++){
		printf("\nInforme os dados da pessoa(%i): ",i+1);
		scanf("%s %f %f %Lu %c",pessoas[i].nome, &pessoas[i].altura,
			&pessoas[i].peso, &pessoas[i].cpf, &pessoas[i].sexo);
	}

	printf("\nInforme o CPF da pessoa: ");
	long long cpf_localizador;
	scanf("%Lu",&cpf_localizador); // <1>

	printf("\nSexo\tNome\tIMC");
	for(int i=0; (i < QUANTIDADE_DE_PESSOAS); i++){ //<2>
		if (cpf_localizador == pessoas[i].cpf){ //<2>
			float imc = pessoas[i].peso / (pessoas[i].altura * 
				pessoas[i].altura);
			printf("\n%c\t%s\t%1.2f\n",pessoas[i].sexo, 
				pessoas[i].nome, imc);
			break;
		}
	}

	getchar();
	return 0;
}
