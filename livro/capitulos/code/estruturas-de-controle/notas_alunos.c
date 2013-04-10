#include <stdio.h>

void main() {
  int nota = 0, cont = 0, soma = 0;
  while (nota != -1) {
    printf("Entre com a nota: ");
    scanf("%i", &nota);
    soma += nota;
    cont++;
  }
  printf("media das notas: %f", soma / cont);
}

