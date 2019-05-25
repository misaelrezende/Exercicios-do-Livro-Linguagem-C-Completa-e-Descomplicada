#include <stdio.h>

void gerarAsterisco(int n){
    int i, j;
    // imprime ate n asteriscos
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
    // imprime de (n - 1) ate 1 asteriscos
    for(i = 0; i < n; i++){
        for(j = n - 1; j > i; j--)
            printf("*");
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    gerarAsterisco(n);
    return 0;
}