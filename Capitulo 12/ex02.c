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
    FILE *arquivo1, *arquivo2, *arquivo3;
    char nomeArquivo1[50], nomeArquivo2[50], buffer1[100], buffer2[100];
    printf("Digite o nome do primeiro arquivo (inclusive com a extensao): ");
    scanf("%s", nomeArquivo1);
    printf("Digite o nome do segundo arquivo (inclusive com a extensao): ");
    scanf("%s", nomeArquivo2);

    arquivo1 = fopen(nomeArquivo1, "r");
    if(arquivo1 == NULL){
        perror("O seguinte erro ocorreu (arquivo 1): ");
        exit(1);
    }
    arquivo2 = fopen(nomeArquivo2, "r");
    if(arquivo2 == NULL){
        perror("O seguinte erro ocorreu (arquivo 2): ");
        exit(1);
    }
    arquivo3 = fopen("arquivogerado.txt", "w+");
    if(arquivo3 == NULL){
        perror("O seguinte erro ocorreu (arquivo 3): ");
        exit(1);
    }
    
    fgets(buffer1, 100, arquivo1);
    while(!(feof(arquivo1))){
        if(feof(arquivo1))
            break;
        fprintf(arquivo3, "%s", buffer1);
        fgets(buffer1, 100, arquivo1);
    }
    fgets(buffer2, 100, arquivo2);
    while(!(feof(arquivo2))){
        if(feof(arquivo2))
            break;
        fprintf(arquivo3, "%s", buffer2);
        fgets(buffer2, 100, arquivo2);
    }
    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);
    return 0;
}