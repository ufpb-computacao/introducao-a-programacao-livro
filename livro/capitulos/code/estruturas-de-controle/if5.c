#include <stdio.h>

int main() {
    int x = 5;
    
    if (x)
       printf("Isto será mostrado");
       
    if (x - 5)
       printf("Isto não será mostrado");
       
    getchar();
    return 0;
}

