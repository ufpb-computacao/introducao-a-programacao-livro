#include <stdio.h>
#include <limits.h> // contém definição de INT_MAX

struct Ponto {
	int x;
	int y;
};

#define QUANTIDADE_DE_PONTOS 5

int main(){
	struct Ponto pontos[QUANTIDADE_DE_PONTOS];

	printf("Campos: x, y\n");
	for(int i=0; (i < QUANTIDADE_DE_PONTOS); i++){
		printf("\nInforme as coordenadas do ponto(%i): ",i+1);
		scanf("%d %d",&pontos[i].x,&pontos[i].y);
	}

	int menor_distancia_ao_quadrado = INT_MAX; // maior inteiro
	int ponto_mais_proximo = 1;

	for(int i=1; (i < QUANTIDADE_DE_PONTOS); i++){
		int distancia_ao_quadrado = (pontos[i].x-pontos[0].x)*
			(pontos[i].x-pontos[0].x)+(pontos[i].y-pontos[0].y)*
			(pontos[i].y-pontos[0].y);
		if(distancia_ao_quadrado < menor_distancia_ao_quadrado){
			ponto_mais_proximo = i;
			menor_distancia_ao_quadrado = distancia_ao_quadrado;
		}
	}

	printf("\nPonto mais proximo: (%d,%d)\n", 
		pontos[ponto_mais_proximo].x, pontos[ponto_mais_proximo].y);

	getchar();
	return 0;
}
