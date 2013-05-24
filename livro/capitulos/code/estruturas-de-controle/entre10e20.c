#include <stdio.h>

int main() {
    int x;
    
    scanf("%d%*c", &x);
    
    if (x > 10 && x < 20)
        printf("X está entre 10 e 20");        

    getchar();    
    return 0;
}

