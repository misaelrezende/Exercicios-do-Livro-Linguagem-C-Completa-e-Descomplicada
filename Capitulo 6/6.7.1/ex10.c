#include <stdio.h>

int main(){
    int vetor[100], num = 1, i;
    for(i = 0; i != 100; num++){
        if(num % 7 != 0){
            vetor[i] = num;
            i++;
        }
    }
    for(i = 0; i < 100; i++)
        printf("%d ", vetor[i]);
    printf("\n");
    return 0;
}