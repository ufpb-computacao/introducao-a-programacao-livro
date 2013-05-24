#include <stdio.h>

int main() {
    int cont;
    
    for (cont = 1; ; cont++) {
        printf("valor de cont: %i\n", cont);
        if (cont == 10) break;
    }
    
    getchar();
    return 0;
}

