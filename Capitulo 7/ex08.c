#include <stdio.h>
#include <string.h>

/* 
    Não sei se entendi bem o que é para fazer no exercicio
    então vou resolver da seguinte maneira:
    1º: Quebro a primeira string (frase) em palavras
    2º: Vejo se a segunda string também aparece na primeira string
 */

int main(){
    char palavra1[100], palavra2[50], auxiliar[50];
    int i, j, tamanho;
    fgets(palavra1, 100, stdin);
    fgets(palavra2, 50, stdin);

    for(i = 0, tamanho = 0; palavra1[i] != '\0'; i++)
        tamanho++;
    palavra1[tamanho-1] = '\0'; // tirando o caractere '\n' da string

    for(i = 0, tamanho = 0; palavra2[i] != '\0'; i++)
        tamanho++;
    palavra2[tamanho-1] = '\0'; // tirando o caractere '\n' da string

    for(i = 0, j = 0; palavra1[i] != '\0'; i++){
        // enquanto nao for um espaco (delimitador de fim de palavra)
        while(palavra1[i] != ' ' && palavra1[i] != '\0'){
            auxiliar[j] = palavra1[i];
            i++;
            j++;
        }
        // colocando o caractere delimitador na string p/ fazer a comparacao
        auxiliar[j] = '\0';
        if(strcmp(auxiliar, palavra2) == 0){
            printf("A segunda string aparece na primeira string\n");
            return 0;
        }else
            // se nao eh igual, reinicia o j para prencher a variavel
            // auxiliar a partir da posicao 0
            j = 0;
    }
    printf("A segunda string nao aparece na primeira string\n");
    return 0;
}