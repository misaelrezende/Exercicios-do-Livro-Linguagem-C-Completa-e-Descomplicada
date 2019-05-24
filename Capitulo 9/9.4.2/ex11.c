#include <stdio.h>

int tamanhoString(char *palavra){
    int i = 0, tamanho = 0;
    while(palavra[i] != '\0'){
        tamanho++;
        i++;
    }
    return tamanho;
}

void converteMaiuscula(char *palavra){
    int i, tamanho = tamanhoString(palavra);
    for(i = 0; i < tamanho; i++)
        palavra[i] = palavra[i] - 32;
}

int main(){
    char palavra[100];
    scanf("%s", palavra);
    converteMaiuscula(palavra);
    printf("%s\n", palavra);
    return 0;
}