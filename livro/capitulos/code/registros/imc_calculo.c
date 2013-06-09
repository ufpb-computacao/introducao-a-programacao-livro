#include <stdio.h>

struct Pessoa {
	char  nome[100];
	char  sexo; // 'm': masculino, 'f': femino
	float peso;
	float altura;
	unsigned long long  cpf;
};

#define QUANTIDADE_DE_PESSOAS 3

int main(){
	struct Pessoa pessoas[QUANTIDADE_DE_PESSOAS];

	printf("Campos: nome, altura, peso, cpf, sexo\n");
	for(int i=0; (i < QUANTIDADE_DE_PESSOAS); i++){
		printf("\nInforme os dados da pessoa(%i): ",i+1);
		scanf("%s %f %f %Lu %c",pessoas[i].nome, &pessoas[i].altura,
			&pessoas[i].peso, &pessoas[i].cpf, &pessoas[i].sexo);
	}

	printf("\nInforme o CPF da pessoa: ");
	unsigned long long cpf_localizador;
	scanf("%Lu",&cpf_localizador);

	printf("\nSexo\tNome\tIMC");
	for(int i=0; (i < QUANTIDADE_DE_PESSOAS); i++){
		if (cpf_localizador == pessoas[i].cpf){
			float imc = pessoas[i].peso / (pessoas[i].altura * 
					pessoas[i].altura);
			printf("\n%c\t%s\t%1.2f\n",pessoas[i].sexo, pessoas[i].nome, imc);
			break;
		}
	}

	getchar();
	return 0;
}
