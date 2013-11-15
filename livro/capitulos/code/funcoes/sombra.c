#include <stdio.h>

int x = 5;        // <1>

void f() {
	int x = 60;     // <2> 
	int y = x * x;  // <3>

	printf("x = %d, y = %d\n", x, y);
}

int g() {
	int y = x * x;  // <4>

	return y;
}

int main() {
	f();

	printf("g = %d\n", g());

	return 0;
}
