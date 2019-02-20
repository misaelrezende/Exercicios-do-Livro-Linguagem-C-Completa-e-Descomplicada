#include <stdio.h>

int main(){
    int n, i, soma = 0;
    float media;
    for(i = 0; i < 10; i++){
        scanf("%d", &n);
        soma += n;
    }
    media =  soma / 10;
    printf("media = %f", media);
    return 0;
}