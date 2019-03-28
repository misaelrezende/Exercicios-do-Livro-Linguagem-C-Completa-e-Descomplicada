#include <stdio.h>

/* 
    ---->>>>>>>>>  NAO ESTA PRONTO NAO  <<<<<<<<<<-----
*/

int somaVetor(int v[], int n){
    int soma = 0;
    if(n == 0){
        soma = v[n];
        return soma;
    }
    printf("s=%d", soma);
    return soma + somaVetor(v, n-1);
}

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n], i;
    printf("Digite os elementos do vetor: ");
    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);
    printf("%d\n", somaVetor(v, n));
    return 0;
}