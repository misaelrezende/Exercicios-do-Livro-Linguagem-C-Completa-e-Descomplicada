#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
    
    Crie um arquivo de teste
    para checar o funcionamento do programa
*/

void retiraCaractereExtra(char *palavra){
	int i, tamanho;
	for(i = 0, tamanho = 0; palavra[i] != '\0'; i++)
        tamanho++;
    if(palavra[tamanho-1] == '\n')
	    palavra[tamanho-1] = '\0'; // tirando o caractere '\n' da string
}

// função inspirada no exercício 9 do capítulo 7
void temPalavra(char *palavra, char *buffer, int *quantidade){
	int i, j, qtde = 0;
	char auxiliar[30];
	retiraCaractereExtra(buffer);

	for(i = 0, j = 0; buffer[i] != '\0'; i++){
        // enquanto nao for um espaco (delimitador de fim de palavra)
        while(buffer[i] != ' ' && buffer[i] != '\0'){
            auxiliar[j] = buffer[i];
            i++;
            j++;
        }
        // colocando o caractere delimitador na string p/ fazer a comparacao
        auxiliar[j] = '\0';
        if(strcmp(auxiliar, palavra) == 0){
            qtde++;
            j = 0;
        }else
            j = 0;
    }
    *quantidade += qtde;
}

int main(){
	FILE *arquivo1;
	char nomeArquivo[20], palavra[30], buffer[100];
	int quantidade;
	printf("Digite o nome do arquivo: ");
	scanf("%s", nomeArquivo);
	printf("Digite a palavra: ");
	scanf("%s", palavra);

	arquivo1 = fopen(nomeArquivo, "r");
	if(arquivo1 == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}

    retiraCaractereExtra(palavra);

    fgets(buffer, 100, arquivo1);
    while(!(feof(arquivo1))){
    	if(feof(arquivo1))
    		break;
    	temPalavra(palavra, buffer, &quantidade);
    	fgets(buffer, 100, arquivo1);
    }

    printf("A palavra %s aparece %d vezes no arquivo %s\n", palavra, quantidade,
    	nomeArquivo);
	fclose(arquivo1);
	return 0;
}