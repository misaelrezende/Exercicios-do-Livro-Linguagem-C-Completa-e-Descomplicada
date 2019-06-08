#include <stdio.h>

int main(){
    char palavra[50], caractere;
    int i, tamanho, vogais = 0;

    fgets(palavra, 50, stdin);

    for(i = 0; palavra[i] != '\0'; i++){
        tamanho++;
        // aproveito e ja vejo se a string tem vogais
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i'
            || palavra[i] == 'o' || palavra[i] == 'u')
            vogais++;
    }
    tamanho--; // retirando o '\n' lido pelo fgets

    scanf("%c", &caractere);

    // aqui eu substituo as vogais pelo caractere lido
    for(i = 0; i < tamanho; i++){
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i'
            || palavra[i] == 'o' || palavra[i] == 'u')
            palavra[i] = caractere;
    }

    printf("\nPalavra alterada: %s\nquantidade de vogais: %d\n", palavra, vogais);    

    return 0;
}