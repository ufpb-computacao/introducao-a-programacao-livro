#include <stdio.h>

int main() {
    int quantidade = 1;    
    float valor, menor;
    
    printf("Informe um valor: ");
    scanf("%f", &menor);
    
    while (quantidade < 50) {
          printf("Informe um valor: ");
          scanf("%f", &valor);
          if (valor < menor)
              menor = valor;
    }
    
    printf("Menor valor lido: %f", menor);
    
    return 0;
}
