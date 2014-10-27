#include <stdio.h>

int main() {
    float nota = 0, soma = 0;
    int cont = 0;
    
    while (nota != -1) {
        printf("Entre com a nota: ");
        scanf("%f", &nota);
        
        if (nota != -1) {
	        soma += nota;
			cont++;
		}
    }
    
    printf("Media das notas: %.2f",  soma / cont);
    
    return 0;
}

