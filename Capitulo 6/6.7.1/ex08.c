#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    float vetor[10], soma = 0;
    int i, negativos = 0;
    srand(time(NULL));

    for(i = 0; i < 10; i++)
        vetor[i] = ((rand() % (RAND_MAX)) - (rand() % RAND_MAX)) / (float)rand();
    
    for(i = 0; i < 10; i++){
        if(vetor[i] > 0)
            soma += vetor[i];
        else
            negativos++;
    }
    printf("O vetor possui %d numeros negativos e\na soma dos numeros " 
    "positivos eh %0.3f\n", negativos, soma);    
    return 0;
}