#include <stdio.h>

int main(){
    int n, i, divisores = 0;
    do{
        scanf("%d", &n);
        if(n < 2){
            printf("\nDigite um número inteiro maior que 1\n");
            continue;
        }
        /* 
          Existem varios algoritmos para verificar se um numero eh primo,
          sendo os mais famosos o Crivo de Erastótenes e o Algoritmo de Euclides
          porem nao uso nenhum deles para resolver esse exercicio proposto.
        */
        for(i = 1; i <= n; i++){
            if(n % i == 0)
                divisores++;
            if(divisores > 2){
                printf("O numero digitado nao eh PRIMO\n");
                break;
            }
        }
        if (divisores <= 2) {
            printf("O numero digitado eh PRIMO\n");
        }
    }while(n < 2);
    
    return 0;
}