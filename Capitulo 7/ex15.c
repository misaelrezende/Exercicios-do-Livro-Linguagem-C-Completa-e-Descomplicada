#include <stdio.h>

int main(){
    char palavra1[50], palavra2[50];
    int i;
    fgets(palavra1, 50, stdin);
    fgets(palavra2, 50, stdin);
    
    for(i = 0; palavra1[i] != '\0'; i++){
        // se a letra na palavra1 for menor que a da palavra 2
        // entao a palavra1 vem primeiro no dicionario
        if(palavra1[i] < palavra2[i]){
            printf("\n%s%s", palavra1, palavra2);
            break;
        }
        // se a letra na palavra2 for menor que a da palavra 1
        // entao a palavra2 vem primeiro no dicionario
        else if(palavra1[i] > palavra2[i]){
            printf("\n%s%s", palavra2, palavra1);
            break;
        }
        // se nenhum dos casos for valido, ou seja, as palavras forem iguais
        // apenas percorra a palavra ate encontrar uma diferenca entre elas
    }
    return 0;
}