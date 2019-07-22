#include <stdio.h>

int main(){
    int variavel1, variavel2;
    int *ponteiroVariavel1, *ponteiroVariavel2;
    // ponteiroVariavel1 recebe o endereço da variavel1
    ponteiroVariavel1 = &variavel1;
    // ponteiroVariavel2 recebe o endereço da variavel2
    ponteiroVariavel2 = &variavel2;
    
    // se o ponteiro para a variavel1 tem um endereço maior que a outra
    if(ponteiroVariavel1 > ponteiroVariavel2)
        printf("A variavel1 (%p) tem o maior endereço\n", ponteiroVariavel1);
    else
        printf("A variavel2 (%p) tem o maior endereço\n", ponteiroVariavel2);
    return 0;
}