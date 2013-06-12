#include <stdio.h>
#include <string.h>

struct Ponto {
	int x;
	char y;
};

int main(){
	struct Ponto primeiro_ponto;
	struct Ponto segundo_ponto;

	primeiro_ponto.x = 4;
	primeiro_ponto.y = 6;
	segundo_ponto.x = 3;
	segundo_ponto.y = 9;

	if (primeiro_ponto.y > segundo_ponto.y)
		printf("Primeiro ponto e' mais alto que o segundo.");
	else
		printf("Segundo ponto e' mais alto que o primeiro.");


	getchar();
	return 0;
}
