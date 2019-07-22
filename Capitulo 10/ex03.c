#include <stdio.h>

int main(){
    float vetor[10];
    int i;
    
    for(i = 0; i < 10; i++)
        // &(*(vetor + i)) eh igual a &vetor[i]
        printf("%p\n", &(*(vetor + i)));
    return 0;
}