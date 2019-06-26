#include <stdio.h>

int main(){
    char palavra[50];
    int i;
    fgets(palavra, 50, stdin);

    for(i = 0; palavra[i] != '\0'; i++){
        // se for um espaco ou um caractere de fim de linha nao faca nada
        if(palavra[i] == ' ' || palavra[i] == '\n')
            continue;
        else
            // troca o caractere para o seu correspondente minúsculo
            palavra[i] = palavra[i] + 32;
    }
    
    printf("%s\n", palavra);

    return 0;
}