#include <stdio.h>

void main() {
  char semana;
  scanf("%i", &semana);
  switch (semana) {
  case 1:
    printf("domingo");
    break;
  case 2:
    printf("segunda-feira");
    break;
  case 3:
    printf("terça-feira");
    break;
  case 4:
    printf("quarta-feira");
    break;
  case 5:
    printf("quinta-feira");
    break;
  case 6:
    printf("sábado");
    break;
  default:
    printf("dia da semana inválido");
    break;
  }
}

