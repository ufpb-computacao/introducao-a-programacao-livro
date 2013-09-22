#include <stdio.h>

int main() {
    int quantidade = 1;
    float valor, menor;
    
    printf("Informe um valor: ");
    scanf("%f", &menor);
    
    while (quantidade < 5) {
        printf("Informe um valor: ");
        scanf("%f", &valor);
        
        if (valor < menor)
            menor = valor;
            
        quantidade++; // Solucao do problema
    }
    
    printf("Menor valor lido: %.2f", menor);    
    
    return 0;
}


