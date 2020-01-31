#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
    
    Crie um arquivo de teste
    para checar o funcionamento do programa
*/

int checarPalavra(char *palavra){
	int vogais = 0, i;
	for(i = 0; palavra[i] != '\0'; i++){
		if(palavra[i] == 65 || palavra[i] == 69 || palavra[i] == 73
			|| palavra[i] == 79 || palavra[i] == 85 || palavra[i] == 97
			|| palavra[i] == 101 || palavra[i] == 105 || palavra[i] == 111
			|| palavra[i] == 117)
			vogais++;
	}
	return vogais;
}

int contaVogais(char *nomeArquivo){
	char buffer[100];
	int vogais = 0;
	FILE *arquivo;
	arquivo = fopen(nomeArquivo, "r");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}
	fgets(buffer, 100, arquivo);
	while(!(feof(arquivo))){
		vogais += checarPalavra(buffer);
		fgets(buffer, 100, arquivo);
	}
	fclose(arquivo);
	return vogais;
}

int main(){
	int quantidadeVogais;
	char nomeArquivo[20];
	scanf("%s", nomeArquivo);
	quantidadeVogais = contaVogais(nomeArquivo);
	printf("%d\n", quantidadeVogais);
	return 0;
}