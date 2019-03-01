#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("numero multiplicado por 2: %d\n", n << 1);
    printf("numero dividido por 2: %d", n >> 1);
    return 0;
}