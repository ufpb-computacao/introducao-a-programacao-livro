#include <stdio.h>

int main() {
    int nota = 0, cont = 0, soma = 0;
    
    while (nota != -1) {
        printf("Entre com a nota: ");
        scanf("%i%*c", &nota);
        soma += nota;
        cont++;
    }
    
    printf("media das notas: %.2f", (float) soma / cont);
    
    getchar();
    return 0;
}

