#include <stdio.h>

int main(){
    int cont, n, soma = 0;
    for(cont = 0; cont < 10; cont++){
        scanf("%d", &n);
        soma = soma + n;
    }
    printf("%d", soma);
    return 0;
}