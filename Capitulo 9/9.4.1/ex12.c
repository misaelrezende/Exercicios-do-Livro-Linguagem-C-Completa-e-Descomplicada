#include <stdio.h>

int checaPrimalidade(int n){
    int i, divisor = 0;
    for(i = 1; i <= n; i++){
        if(n % i == 0)
            divisor++;
        if(divisor > 2)
            break;
    }
    if(divisor > 2)
        return 0;
    return 1;
}

int maiorFatorPrimo(int valor){
    int fator = 1, i, aux;
    for(i = 2; i <= valor; i++){
        aux = checaPrimalidade(i);
        if(aux == 1)
            if(valor % i == 0)
                fator = i;
        if(i >= valor/2)
            break;
    }
    return fator;
}

int main(){
    int n, maior;
    scanf("%d", &n);
    maior = maiorFatorPrimo(n);
    printf("%d\n", maior);
    return 0;
}