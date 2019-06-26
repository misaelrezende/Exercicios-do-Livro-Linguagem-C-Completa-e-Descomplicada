#include <stdio.h>

int main(){
    char palavra[50];
    int i, tamanho;
    fgets(palavra, 50, stdin);
    
    // calculando tamanho da palavra
    for(i = 0, tamanho = 0; palavra[i] != '\0'; i++)
        tamanho++;
    tamanho = tamanho - 1; // retirando o '\n' lido pelo fgets

    // imprimindo da posicao tamanho - 1 até a posicao 0
    // ou seja, imprimindo do final para o comeco
    for(i = tamanho - 1; i >= 0; i--)
        printf("%c", palavra[i]);
    printf("\n");
    return 0;
}