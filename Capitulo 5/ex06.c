#include <stdio.h>

int main(){
    int i;
    /* a exibicao da contagem pode demorar alguns segundos se o programador
     * quiser. Basta usar a biblioteca time.h pois ela tem uma funcao que
     * "atrasa" a execucao de um trecho de codigo definido pelo programador 
    */
    for(i = 10; i >= 0; i--){
        printf("%d\n", i);
    }
    printf("FIM!");    
    return 0;
}