#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%i", &a);
    scanf("%i%*c", &b);
    
    if (a > b)
       printf("A e' maior que B");
    else if (b > a)
        printf("B e' maior que A");
    else
        printf("A = B");
        
    getchar();
    return 0;
}

