#include <stdio.h>

int main(){
    int numLido, numGerado, aux;
    scanf("%d", &numLido);
    /* basicamente, um algoritmo simples eh ir pegando o resto
    das divisoes e tambem ir dividindo o numero lido por 10 */
    numGerado = numLido % 10;
    aux = numLido / 10;
    numGerado = numGerado * 10 + aux % 10;
    aux = aux / 10;
    numGerado = numGerado * 10 + aux % 10;
    printf("Numero lido: %d\n", numLido);
    printf("Numero gerado: %d", numGerado);
    return 0;
}