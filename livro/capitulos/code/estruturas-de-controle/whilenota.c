#include <stdio.h>

int main() {
    float nota = 1;
    
    while (nota != -1) {
        scanf("%f", &nota);
        
        if (nota >= 7)
            printf("Aprovado");
        else
            printf("Reprovado");
    }
    
    getchar();
    return 0;
}
