#include <stdio.h>

int main() {
    int semana;
    
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &semana);
    
    switch (semana) {
	    case 1:
	        printf("Domingo");
	        break;
	    case 2:
	        printf("Segunda-feira");
	        break;
	    case 3:
	        printf("Terca-feira");
	        break;
	    case 4:
	        printf("Quarta-feira");
	        break;
	    case 5:
	        printf("Quinta-feira");
	        break;
	    case 6:
	        printf("Sexta-feira");
	        break;	        
	    case 7:
	        printf("Sabado");
	        break;
	    default:
	        printf("Numero fora do intervalo permitido.");
	        break;
    }
    
    return 0;
}

