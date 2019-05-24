#include <stdio.h>

int tamanhoString(char *palavra){
    int i = 0, tamanho = 0;
    while(palavra[i] != '\0'){
        tamanho++;
        i++;
    }
    return tamanho;
}

int palindromo(char *palavra){
    int i, j, tamanho, resultado = 1;
    tamanho = tamanhoString(palavra) - 1;
    for(i = 0, j = tamanho; i + 1 != j - 1; i++, j--){
        if(palavra[i] != palavra[j]){
            resultado = 0;
            break;
        }
    }
    return resultado;
}

int main(){
    char palavra[100];
    int resultado;
    scanf("%s", palavra);
    resultado = palindromo(palavra);
    printf("%d\n", resultado);
    return 0;
}