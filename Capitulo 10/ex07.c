#include <stdio.h>
/*  A lógica usada foi a seguinte:
    Se a segunda string está contida completamente em algum trecho
    da primeira string entao ela ESTÁ contida na primeira string.

    Casos de Teste:
    string 1: a vida de joana nao eh facil
    string 2: joana
    resposta: A segunda string esta contida na primeira string

    string 1: a vida de joana nao eh facil
    string 2: a
    resposta: A segunda string esta contida na primeira string

    string 1: a vida de joana nao eh facil
    string 2: vida
    resposta: A segunda string esta contida na primeira string

    Tem mais outros casos de teste depois do código
*/
int verifica(char *string1, char *string2){
    int i, j, auxiliar = 0;
    for(i = 0, j = 0; (*(string1 + i)) != '\0'; i++){
        // enquanto as posicoes das strings forem iguais
        while( (*(string1 + i)) == (*(string2 + j)) ){
            i++;
            j++;
            // se acabou a segunda string
            if( (*(string2 + j)) == '\n' || (*(string2 + j)) == '\0')
                return 1;
            // se nao eh mais igual, faz auxiliar ser 0
            else if( (*(string1 + i)) != (*(string2 + j)) )
                auxiliar = 0;
        }
    }
    return auxiliar;
}

int main(){
    char string1[100], string2[50];
    fgets(string1, 100, stdin);
    fgets(string2, 50, stdin);

    int retorno = verifica(string1, string2);
    if(retorno == 1)
        printf("A segunda string esta contida na primeira string\n");
    else
        printf("A segunda string NAO esta contida na primeira string\n");
    return 0;
}


/*  Outros Casos de Teste:

    string 1: a vida de joana
    string 2: joana
    resposta: A segunda string esta contida na primeira string

    string 1: ela eh
    string 2: eh
    resposta: A segunda string esta contida na primeira string

    string 1: eh ela
    string 2: eh
    resposta: A segunda string esta contida na primeira string

    string 1: a vida de joanah
    string 2: joanl
    resposta: A segunda string NAO esta contida na primeira string

    string 1: a vida de joanah nao
    string 2: joana
    resposta: A segunda string esta contida na primeira string

    string 1: a vida de joana nao
    string 2: joanah
    resposta: A segunda string NAO esta contida na primeira string

    string 1: a vida de joana naoh
    string 2: nao
    resposta: A segunda string esta contida na primeira string

    string 1: a vida de joana nao
    string 2: naol
    resposta: A segunda string NAO esta contida na primeira string

    string 1: a
    string 2: ah
    resposta: A segunda string NAO esta contida na primeira string

    --->> BUG <<---
    string 1: a vida de joana nao eh facil
    string 2: vidal
    resposta: A segunda string esta contida na primeira string
    
    Problema: A resposta correta é o contrário.
    Lógica no código: O ponteiro para a string2 para no 'l' de vidal e o
    ponteiro da string1 continua se movimentando até que
    ele chega no 'l' (final da primeira string), entra no while e 
    depois termina a execução no 1º if
*/