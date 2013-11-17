#include <stdio.h>

int main() {
	char str1[100], str2[100];

	gets(str1);
	gets(str2);

	printf("%d", strlen(str1));
	printf("%d", strlen(str2));

	strcat(str1, str2);
	printf("%d", strlen(str1));

	return 0;
}
