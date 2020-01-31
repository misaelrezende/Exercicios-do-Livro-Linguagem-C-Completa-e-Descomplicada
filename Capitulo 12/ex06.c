#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
    
    Crie um arquivo de teste parecido com o abaixo
    para checar o funcionamento do programa

    Exemplo de arquivo de teste:

    arroz
	2
	15.00
	feijão
	4
	4.50
	açúcar
	1
	9.99
*/

int main(){
	FILE *arquivo;
	char nomeArquivo[20], buffer[50];
	int FLAG = 0, quantidade;
	float valorUnitario, valorTotal = 0;
	printf("Digite o nome do arquivo: ");
	scanf("%s", nomeArquivo);
	
	arquivo = fopen(nomeArquivo, "r");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}

	fgets(buffer, 50, arquivo);
	while(!(feof(arquivo))){
		// checa se o primeiro caractere é um número
		if(buffer[0] > 57){
			fgets(buffer, 50, arquivo);
			FLAG = 1; // acabou de ler o nome do produto
			continue;
		}
		if(FLAG == 1){ // se acabou de ler o nome, agora é a vez da quantidade
			quantidade = atoi(buffer);
			FLAG = 0;
		}else{ // está lendo o valor unitário
			valorUnitario = atof(buffer);
			valorTotal = valorTotal + (valorUnitario * (float)quantidade);
		}
		fgets(buffer, 50, arquivo);
	}
	printf("Total da compra: %f\n", valorTotal);
	fclose(arquivo);
	return 0;
}