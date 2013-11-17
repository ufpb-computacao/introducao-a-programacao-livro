int main() {
	char s[40];
	int i;

	gets(s);

	for (i=0; i < strlen(s); i++) {
		if (s[i] == ' ') 
			s[i] = '-';
	}

	puts(s);  

	return 0;
}

