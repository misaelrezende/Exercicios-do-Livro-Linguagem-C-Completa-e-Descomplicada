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

void converteLetraMaiuscula(char *buffer){
	char palavra[100];
	strcpy(palavra, buffer);
	int i;
	for(i = 0; palavra[i] != '\0'; i++){
        // se for um espaco ou um caractere de fim de linha nao faca nada
        if(palavra[i] == ' ' || palavra[i] == '\n')
            continue;
        else
            // troca o caractere para o seu correspondente maiúsculo
            palavra[i] = palavra[i] - 32;
    }
    strcpy(buffer, palavra);
}

int main(){
	FILE *arquivo1, *arquivo2;
	char nomeArquivo1[30], nomeArquivo2[30], buffer[100];
	printf("Digite o nome do arquivo a ser convertido: ");
	scanf("%s", nomeArquivo1);
	printf("Digite o nome do arquivo a ser salvo: ");
	scanf("%s", nomeArquivo2);

	arquivo1 = fopen(nomeArquivo1, "r");
	if(arquivo1 == NULL){
		perror("O seguinte erro ocorreu (arquivo 1): ");
        exit(1);
	}
	arquivo2 = fopen(nomeArquivo2, "w+");
	if(arquivo2 == NULL){
		perror("O seguinte erro ocorreu (arquivo 2): ");
        exit(1);
	}

	fgets(buffer, 100, arquivo1);
	while(!(feof(arquivo1))){
		if(feof(arquivo1))
			break;
		converteLetraMaiuscula(buffer);
		fprintf(arquivo2, "%s", buffer);
		fgets(buffer, 100, arquivo1);
	}

	fclose(arquivo1);
	fclose(arquivo2);
	return 0;
}