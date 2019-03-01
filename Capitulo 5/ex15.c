#include <stdio.h>

int main(){
    int n, maior=0, menor;
    while(n > -1){
        scanf("%d", &n);
        if(n > maior)
            maior = n;
        else if(n < menor && n > -1)
            menor = n;
    }
    printf("Menor numero lido: %d\n", menor);
    printf("Maior numero lido: %d\n", maior);

    return 0;
}