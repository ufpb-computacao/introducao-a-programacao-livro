#include <stdio.h>

int main() {
    int quantidade = 1;
    float valor, menor;
    
    printf("Informe um valor: ");
    scanf("%f", &menor);
    
    while (quantidade < 50) {
        printf("Informe um valor: ");
        scanf("%f%*c", &valor);
        
        if (valor < menor)
            menor = valor;
            
        quantidade++; //solução do problema
    }
    
    printf("O menor valor lido foi: %.2f", menor);
    
    getchar();
    return 0;
}


