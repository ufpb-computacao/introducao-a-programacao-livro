#include <stdio.h>

int main() {
    int cont = 1;
    
    do {
       printf("Isto será mostrado 10 vezes\n");
       cont++;
    } while (cont <= 10);
    
    getchar();
    return 0;
}
