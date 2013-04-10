#include <stdio.h>

void main() {
  int quantidade = 1;
  float valor, menor;
  scanf("%f", &menor);
  while (quantidade < 50) {
    printf("Informe um valor: ");
    scanf("%f", &valor);
    if (valor < menor)
      menor = valor;
    quantidade++; //solução do problema
  }
  printf("o menor valor lido é: %f", menor);
}


