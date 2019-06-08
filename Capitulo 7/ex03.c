#include <stdio.h>

int main(){
    char palavra[50];
    int i, tamanho;
    fgets(palavra, 50, stdin);

    // enquanto eu nao chegar no fim da string ('\0) eu adiciono um na contagem
    for(i = 0, tamanho = 0; palavra[i] != '\0'; i++)
        tamanho++;
    
    /* 
        Lembra que a funcao fgets tambem le o caractere de fim de linha '\n' !?
        A subtracao abaixo eh para retirar esse caractere da contagem final
                                                referencia: página 137 do livro
    */
    tamanho = tamanho - 1;

    printf("%d\n", tamanho);
    return 0;
}