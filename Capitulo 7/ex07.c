#include <stdio.h>

int main(){
    char palavra[50];
    int i, j, tamanho = 0;
    scanf("%s", palavra);
    
    // obter o tamanho da palavra
    for(i = 0; palavra[i] != '\0'; i++)
        tamanho++;

    for(i = 0, j = tamanho - 1; i <= j; i++, j--){
        if(palavra[i] != palavra[j]){
            printf("Nao eh Palindromo\n");
            return 0; // se nao for palindromo, ja finaliza o programa
        }
    }
    // so vai executar se o IF acima nao for executado
    printf("Eh Palindromo\n");
    return 0;
}