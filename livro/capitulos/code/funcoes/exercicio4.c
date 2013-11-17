#include <stdio.h>

int x = 5;
int y = 9;

int f(int x) {
	int z = x * x;
	return z * y;
}

int main() {
	int y = 3;

	printf("%d \n", x);
	printf("%d \n", f(y));

	return 0;
}
