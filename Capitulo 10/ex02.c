#include <stdio.h>

int main(){
    int variavel1, variavel2;
    scanf("%d%d", &variavel1, &variavel2);

    /* Uma outra forma de ver o endereco da variável eh usar
       o operador & (para obter o endereço daquela variável) */
    if(&variavel1 > &variavel2)
        printf("O maior endereco eh %p e o conteudo dele eh %d\n", &variavel1, variavel1);
    else
        printf("O maior endereco eh %p e o conteudo dele eh %d\n", &variavel2, variavel2);
    return 0;
}