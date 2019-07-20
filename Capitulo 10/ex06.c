#include <stdio.h>

int main(){
    int i, vetor[5];
    for(i = 0; i < 5; i++)
        scanf("%d", &vetor[i]);

    for(i = 0; i < 5; i++)
        if(vetor[i] % 2 == 0)
            printf("%p\n", &(*(vetor + i)));
    printf("\n");
    return 0;
}