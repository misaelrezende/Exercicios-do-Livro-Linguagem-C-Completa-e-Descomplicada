#include <stdio.h>
#include <stdlib.h>

int* somarVetores(int *A, int *B, int n){
    int i, *C;

    C = (int*) malloc(n * sizeof(int));
    if(C == NULL){
        printf("Nao foi possivel realizar a alocacao na memoria\n");
        exit(1);
    }

    for(i = 0; i < n; i++)
        C[i] = A[i] * B[i];
    
    return C;
}

int main(){
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    int i, *C, A[n], B[n];
    printf("Digite os valores do vetor A e do vetor B: ");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);
    for(i = 0; i < n; i++)
        scanf("%d", &B[i]);
    
    C = somarVetores(A, B, n);
    
    free(C);
    C = NULL;
    return 0;
}