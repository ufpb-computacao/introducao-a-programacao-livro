#include <stdio.h>

int main() {
    char semana;
    
    scanf("%i%*c", &semana);
    
    switch (semana) {
    case 1:
        printf("domingo");
        break;
    case 2:
        printf("segunda-feira");
        break;
    case 3:
        printf("terca-feira");
        break;
    case 4:
        printf("quarta-feira");
        break;
    case 5:
        printf("quinta-feira");
        break;
    case 6:
        printf("sabado");
        break;
    default:
        printf("dia da semana invalido");
        break;
    }
    
    getchar();
    return 0;
}

