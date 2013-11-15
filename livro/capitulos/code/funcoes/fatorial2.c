#include <stdio.h>

// prototipo
int fatorial(int);

int main() {
	int n;

	printf("Entre o numero para calcular o fatorial: ");
	scanf("%d", &n);

	printf("%d! = %d\n", n, fatorial(n));

	return 0;
}

int fatorial(int n) {  
	if (n <= 1)                  // <1>
		return 1;                    
	else 
		return n * fatorial(n - 1);  
}
