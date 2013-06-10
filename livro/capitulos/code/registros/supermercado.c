#include <stdio.h>

struct Produto {
  long  codigo;
  char  nome[100];
  float preco;
};

#define QUANTIDADE_DE_PRODUTOS 5

int main(){
	struct Produto produtos[QUANTIDADE_DE_PRODUTOS];

	printf("Campos: codigo-do-produto nome preco\n");
	for(int i=0; (i < QUANTIDADE_DE_PRODUTOS); i++){
		printf("\nInforme os dados do produto(%i): ",i+1);
		scanf("%ld %s %f",&produtos[i].codigo,produtos[i].nome,
			&produtos[i].preco);
	}

	for(int i=0; (i < QUANTIDADE_DE_PRODUTOS); i++){
		printf("\n%ld\t%s R$ %1.2f", produtos[i].codigo,
			produtos[i].nome,produtos[i].preco);
	}

	long codigo_digitado;
	printf("\nInforme o codigo do produto: ");
	scanf("%ld", &codigo_digitado);

	for(int i=1; (i < QUANTIDADE_DE_PRODUTOS); i++){
		if (produtos[i].codigo == codigo_digitado) {
			printf("\nPreço: R$ %1.2f\n", produtos[i].preco);
		}
	}

	getchar();
	return 0;
}
