#include <stdio.h>

int main(){
    int n, i, soma = 0;
    // assumo que sera digitado apenas numeros positivos
    scanf("%d", &n); 
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            if( i == n)
                break;
            soma += i;
        }
    }
    printf("A soma eh %d", soma);
    return 0;
}