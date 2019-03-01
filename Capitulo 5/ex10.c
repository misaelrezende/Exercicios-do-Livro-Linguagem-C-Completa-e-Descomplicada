#include <stdio.h>

int main(){
    int cont, n, soma = 0;
    float media;
    for(cont = 0; cont < 10; ){
        scanf("%d", &n);
        if(n > 0){ // se numero eh positivo
            soma += n;
            // contador so eh incrementado quando numero eh positivo
            cont++;
        }
    }
    media = soma / 10;
    printf("media = %f", media);
    return 0;
}