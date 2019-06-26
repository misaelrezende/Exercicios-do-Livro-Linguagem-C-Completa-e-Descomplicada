#include <stdio.h>

int main(){
    char palavra[50], auxiliar;
    int i, j, tamanho;
    fgets(palavra, 50, stdin);

    for(i = 0; palavra[i] != '\0'; i++)
        tamanho++;
    tamanho--; // retirando o '\n' lido pelo fgets

    /* esse eh um algoritmo in-place, o que significa que ele não cria/usa 
       mais espaço extra na memória para as variáveis já criadas.
       Em outras palavras, ele usa somente o espaço 
       pre-definido pelo programador ao criar o algoritmo
    */
    for(i = 0, j = tamanho; i < j; i++, j--){
        auxiliar = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = auxiliar;
    }
    printf("%s\n", palavra);

    return 0;
}