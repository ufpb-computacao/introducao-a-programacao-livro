#include <stdio.h>
#include <math.h>

float calculo_delta(float a, float b, float c) {
	return (b * b) - (4 * a * c);
}

float raiz(float a, float b, float delta, int sinal) {
	return (-b + sqrt(delta)) / 2 * a;
}

int main() {
	float a, b, c;
	float delta;

	printf("Entre os coeficientes A, B e C, nesta ordem: ");
	scanf("%f %f %f", &a, &b, &c);

	delta = calculo_delta(a, b, c);

	if (delta < 0.0)
		printf("Delta negativo, nao existem raizes\n");
	else if (delta == 0)
		printf("Delta = 0, uma raiz: %f\n", raiz(a, b, delta, 1));
	else
		printf("Raizes: %f e %f\n", raiz(a, b, delta, 1), raiz(a, b, delta, -1));

	return 0;
}
