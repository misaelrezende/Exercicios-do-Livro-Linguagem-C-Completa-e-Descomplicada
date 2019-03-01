#include <stdio.h>

int main(){
    int n, i, menor, maior;
    for(i = 0; i < 10; i++){
        scanf("%d", &n);
        if(i == 0){ // ocorre somente na primeira iteracao/leitura
            menor = n;
            maior = n;
            // p/ nao executar o resto do codigo do laco nessa iteracao
            continue;
        }
        if(menor > n)
            menor = n;
        if(maior < n)
            maior = n;
    }
    printf("menor = %d, maior = %d", menor, maior);
    return 0;
}