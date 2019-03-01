#include <stdio.h>

int main(){
    int i, n, fib1, fib2, termoFibonacci;
    scanf("%d", &n);

    /* primeiros 2 termos - (considerando o 0 como o 0-esimo termo 
       e 1 como o primeiro termo) */
    fib1 = 0;
    fib2 = 1;
    
    if(n == 0){
        printf("%d\n", fib1);
        return 0;
    }else if(n == 1){
        printf("%d\n", fib2);
        return 0;
    } 
    // trecho abaixo executa somente do 3 termo em diante
    for(i = 2; i <= n; i++){
        termoFibonacci = fib1 + fib2;
        fib1 = fib2;
        fib2 = termoFibonacci;
    }
    printf("%d\n", termoFibonacci);
    
    return 0;
}