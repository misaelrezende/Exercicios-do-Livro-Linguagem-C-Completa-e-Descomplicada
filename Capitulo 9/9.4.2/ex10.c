#include <stdio.h>

int tamanhoString(char *palavra){
    int tamanho = 0;
    while(*palavra != '\0')
        tamanho++;
    printf("tamanho %d\n", tamanho);
    return tamanho;
}

int palindromo(char *palavra){
    int i, j, tamanho, palindromo = 1;
    tamanho = tamanhoString(palavra);
    printf("tamanho: %d\n", tamanho);
    for(i = 0, j = tamanho; i != j; i++, j--)
        if(palavra[i] != palavra[j]){
            palindromo = 0;
            break;
        }
    return palindromo;
}

int main(){
    char palavra[100];
    int resultado;
    setbuf(stdin, NULL);
    scanf("%s", palavra);
    printf("T");
    resultado = palindromo(palavra);
    printf("%d\n", resultado);
    return 0;
}