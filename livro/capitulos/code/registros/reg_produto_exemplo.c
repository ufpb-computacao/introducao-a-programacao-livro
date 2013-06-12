#include <stdio.h>

struct Produto {
	long  codigo;
	char  nome[100];
	float preco;
};

int main(){
	struct Produto p;

	scanf("%ld %s %f", &p.codigo, p.nome, &p.preco); <1>

	if (p.preco < 4)
		printf("\nProduto em promocao: %s R$ %1.2f", p.nome, p.preco);
	else
		printf("\nProduto cadastrado.");


	getchar();
	return 0;
}
