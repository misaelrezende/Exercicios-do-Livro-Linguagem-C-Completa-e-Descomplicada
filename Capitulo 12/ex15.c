#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
    
    Crie um arquivo de teste
    para checar o funcionamento do programa
*/
int* checarLetras(FILE*);
void imprimirQuantidade(int*);

int main(){
	FILE *arquivo;
	char nomeArquivo[30];
	scanf("%s", nomeArquivo);
	arquivo = fopen(nomeArquivo, "r");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}
	int *vetor = checarLetras(arquivo);
	imprimirQuantidade(vetor);
	fclose(arquivo);
	return 0;
}

int* checarLetras(FILE *arquivo){
	int *vetor, i, posicao;
	char caractere;
	vetor = malloc(26 * sizeof(int));
	while(!(feof(arquivo))){
		caractere = fgetc(arquivo);
		for(i = 65, posicao = 0; i <= 90; i++, posicao++)
			// checa letra minuscula e maiuscula
			if(caractere == i || caractere == i + 32)
				vetor[posicao]++;
	}
	return vetor;
}

void imprimirQuantidade(int *vetor){
	int i;
	for(i = 0; i < 26; i++)
		printf("%c|%c: %d vez(es)\n", i+65, i+65+32, vetor[i]);
}