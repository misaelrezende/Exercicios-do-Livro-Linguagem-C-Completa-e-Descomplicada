#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
    
    Crie um arquivo de teste
    para checar o funcionamento do programa
	
	Para simplificar, digite o número de telefone todo junto
	e sem espaço, igual demonstrado abaixo.
	
    Exemplo de entrada:
	
    Joao
	1123230000
	Patricia
	4235350000
*/

int main(){
	FILE *arquivo;
	char nome[30];
	int telefone;
	arquivo = fopen("agenda.txt", "w+");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}

	scanf("%s", nome);
	scanf("%d", &telefone);
	while(telefone != 0){
		fprintf(arquivo, "%s\n%d\n", nome, telefone);
		scanf("%s", nome);
		scanf("%d", &telefone);
	}
	fclose(arquivo);
	return 0;
}