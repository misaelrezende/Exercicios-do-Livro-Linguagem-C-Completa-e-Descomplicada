#include <stdio.h>

int main(){
    int i, vetor[5];

    for(i = 0; i < 5; i++){
        // primeiro acessa o ponteiro que marca o inicio do array --> *(vetor)
        // depois percorre o array i vezes --> *(vetor + i)
        scanf("%d", &(*(vetor + i)));
        printf("%d ", (*(vetor + i)) * 2);
    }
    printf("\n");
    return 0;
}