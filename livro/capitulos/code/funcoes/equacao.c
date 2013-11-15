#include <stdio.h>
#include <math.h>

float calculo_delta(float a, float b, float c) {  // <1>
	return (b * b) - (4 * a * c);
}

float raiz_positiva(float a, float b, float delta) {  // <2>
	return (-b + sqrt(delta)) / 2 * a;
}

float raiz_negativa(float a, float b, float delta) {  // <3>
	return (-b - sqrt(delta)) / 2 * a;
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
		printf("Delta = 0, uma raiz: %f\n", raiz_positiva(a, b, delta));
	else
		printf("Raizes: %f e %f\n", raiz_positiva(a, b, delta), raiz_negativa(a, b, delta));
}
