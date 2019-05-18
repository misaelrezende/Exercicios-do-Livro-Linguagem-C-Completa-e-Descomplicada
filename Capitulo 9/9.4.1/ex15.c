#include <stdio.h>

void gerarExclamacao(int valor){
    int i, j;
    for(i = 1; i <= valor; i++){
        for(j = 1; j <= i; j++)
            printf("!");
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    gerarExclamacao(n);
    return 0;
}