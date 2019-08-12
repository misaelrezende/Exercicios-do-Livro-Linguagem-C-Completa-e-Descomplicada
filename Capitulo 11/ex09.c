#include <stdio.h>
#include <stdlib.h>

int tamanhoString(char *palavra){
    int i, contador = 0;
    for(i = 0; palavra[i] != '\0'; i++)
        contador++;
    return contador - 1; // retira o '\n' da contagem de caracteres
}

char* inverterString(char *palavra){
    char *string;
    int i, j, tamanho;
    tamanho = tamanhoString(palavra);
    // tamanho+1 pois adiciona o espaco para o '\0'
    string = (char*) malloc((tamanho+1) * sizeof(char));
    if(string == NULL){
        printf("Nao foi possivel alocar memoria\n");
        exit(1);
    }
    for(i = 0, j = tamanho-1; i < tamanho; i++, j--){
        string[i] = palavra[j];
    }
    string[i] = '\0';
    return string;
}
int main(){
    char palavra[50], *ponteiroPalavra;
    fgets(palavra, 50, stdin);
    ponteiroPalavra = inverterString(palavra);
    // printf("%s\n", ponteiroPalavra);

    free(ponteiroPalavra);
    ponteiroPalavra = NULL;
    return 0;
}