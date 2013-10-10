#include <stdio.h>

int main() {
    int cont;
    
    for (cont = 1; cont <= 20; cont++) {
        if (cont % 2 == 0) continue;
        printf("Valor de cont: %i\n", cont);
    }    

    return 0;
}

