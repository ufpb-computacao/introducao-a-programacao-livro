#include <stdio.h>

int main() {
    float nota;

    scanf("%f", &nota);    
    while (nota != -1) {	        
        if (nota >= 7)
            printf("Aprovado\n");
        else
            printf("Reprovado\n");
		
		scanf("%f", &nota);    
    }
    
    return 0;
}
