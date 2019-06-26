#include <stdio.h>

int main(){
    char palavra[100], palavraCodificada[100];
    int i;
    fgets(palavra, 100, stdin);

    for(i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == ' ' || palavra[i] == '\n')
            palavraCodificada[i] = palavra[i];
        else
            palavraCodificada[i] = palavra[i] + 3;
    }palavraCodificada[i] = '\0';

    printf("%s", palavraCodificada);
    return 0;
}