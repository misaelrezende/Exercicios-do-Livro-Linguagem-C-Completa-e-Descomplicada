#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
    
    Crie um arquivo de teste
    para checar o funcionamento do programa
*/

int main(){
    FILE *arquivo;
    char nomeArquivo[50], caractere;
    int contador = 0;
    printf("Digite o nome do arquivo (inclusive com a extensao): ");
    scanf("%s", nomeArquivo);
    arquivo = fopen(nomeArquivo, "r");
    if(arquivo == NULL){
        perror("O seguinte erro ocorreu: ");
        exit(1);
    }
    
    while(!feof(arquivo)){
        // fgetc() le um caractere por vez no arquivo
        caractere = fgetc(arquivo);
        if(caractere == 10) // 10 eh o valor em ASCII do '\n'
            contador++;
    }
    printf("Esse arquivo possui %d linhas.\n", contador);
    fclose(arquivo);
    return 0;
}
