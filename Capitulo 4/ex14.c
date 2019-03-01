#include <stdio.h>

int main(){
    int n, cont = 0;
    printf("Digite o numero: ");
    scanf("%d", &n);
    if(n % 3 == 0)
        cont++;
    if(n % 5 == 0)
        cont++;
    
    if(cont == 0)
        printf("O numero nao eh divisivel por 3 ou 5");
    else{
        if(cont == 1)
            printf("O numero eh divisivel apenas por um dos numeros");
        else
            printf("O numero eh divisivel pelos dois numeros");
    }

    return 0;
}