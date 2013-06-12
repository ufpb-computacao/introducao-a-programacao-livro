#include <stdio.h>
#include <string.h>

struct Ponto {
	int x;
	int y;
};

#define QUANTIDADE_DE_PONTOS 3

int main(){
	struct Ponto pontos[QUANTIDADE_DE_PONTOS];

	pontos[0].x = -4;  pontos[0].y = 7;
	pontos[1].x = 2; pontos[1].y = -9;
	pontos[2].x = 5; pontos[2].y = 3;

	for (int i = 0; i<QUANTIDADE_DE_PONTOS; i++){
		if(pontos[i].y > 0)
			printf("\nPonto abaixo da acima: (%d,%d)", pontos[i].x, pontos[i].y);
	}


	getchar();
	return 0;
}
