#include <stdio.h>

// prototipo
int fatorial(int);    // <1>

int main() {
	int n;

	printf("Entre o numero para calcular o fatorial: ");
	scanf("%d", &n);

	printf("%d! = %d\n", n, fatorial(n));

	return 0;
}

int fatorial(int n) {  
	if (n == 0 || n == 1)
		return 1;                    // <2>
	else 
		return n * fatorial(n - 1);  // <3>
}
