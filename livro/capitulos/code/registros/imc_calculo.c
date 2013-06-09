#include <stdio.h>

struct Pessoa {
	char  nome[100];
	char  sexo; // 'm': masculino, 'f': femino
	float peso;
	float altura;
	long  cpf;
};

#define QUANTIDADE_DE_PESSOAS 3

int main(){
	struct Pessoa pessoas[QUANTIDADE_DE_PESSOAS];

	printf("Campos: nome, altura, peso, cpf, sexo\n");
	for(int i=0; (i < QUANTIDADE_DE_PESSOAS); i++){
		printf("\nInforme os dados da pessoa(%i): ",i+1);
		scanf("%s %f %f %l %1c",pessoas[i].nome, &pessoas[i].altura,
			&pessoas[i].peso, &pessoas[i].cpf, &pessoas[i].sexo);
	}

	printf("\nMatricula\tNome\tMedia\n");
	for(int i=0; (i < QUANTIDADE_DE_PESSOAS); i++){
		printf("%s %s\n",pessoas[i].nome,pessoas[i].sexo);
	}

	getchar();
	return 0;
}
