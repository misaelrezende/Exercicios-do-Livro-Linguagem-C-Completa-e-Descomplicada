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
	char nomeArquivo[30], buffer[50];
	int quantidadePalavras = 0;
	scanf("%s", nomeArquivo);
	arquivo = fopen(nomeArquivo, "r");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}
	while(!(feof(arquivo))){
		fscanf(arquivo, "%s", buffer);
		quantidadePalavras++;
	}
	printf("%d\n", quantidadePalavras);
	fclose(arquivo);
	return 0;
}