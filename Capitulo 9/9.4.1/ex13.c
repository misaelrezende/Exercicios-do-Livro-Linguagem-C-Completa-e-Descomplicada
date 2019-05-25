#include <stdio.h>

int somatorio(int valor){
    int soma = 0;
    soma = valor * (valor + 1) / 2;
    return soma;
}

int main(){
    int n, soma;
    scanf("%d", &n);
    soma = somatorio(n);
    printf("%d\n", soma);
    return 0;
}