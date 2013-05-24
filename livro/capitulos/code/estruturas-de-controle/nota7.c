#include <stdio.h>

int main() {
    float nota;
    
    scanf("%f%*c", &nota);
    
    if (nota >= 7)
       printf("Aprovado");
    else
        printf("Reprovado");
    
    getchar();
    return 0;
}
