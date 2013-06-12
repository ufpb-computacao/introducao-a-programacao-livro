#include <stdio.h>

typedef struct  {
	int x;
	int y;
} Ponto ;

typedef struct {
	Ponto p1;
	Ponto p2;
	Ponto p3;
} Triangulo ;

int main() {
	Triangulo t;
	t.p1.x= 1; t.p1.y=0;
	t.p2.x=-1; t.p2.y=0;
	t.p3.x= 0; t.p3.y=1;

	printf("Triangulo: (%d, %d), (%d, %d), (%d, %d).\n", 
		t.p1.x, t.p1.y, t.p2.x, t.p2.y, t.p3.x, t.p3.y);

	return 0;
}


