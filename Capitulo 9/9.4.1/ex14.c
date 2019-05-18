#include <stdio.h>
int calculaFatorial(int valor){
    int i, fatorial = 1;
    for(i = 1; i <= valor; i++)
        fatorial *= i;
    return fatorial;
}

int main(){
    int n, fatorial;
    scanf("%d", &n);
    fatorial = calculaFatorial(n);
    printf("%d\n", fatorial);
    return 0;
}