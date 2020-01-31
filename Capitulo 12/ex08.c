#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
    
    Crie um arquivo de teste
    para checar o funcionamento do programa
*/

int calcularIdade(int dia, int mes, int ano, int diaAtual, int mesAtual,
	int anoAtual){
	int idade;
	if(mes == mesAtual || mes < mesAtual){
		if(dia == diaAtual || dia < diaAtual)
			idade = anoAtual - ano;
		else
			idade = anoAtual - ano - 1;
	}else
		idade = anoAtual - ano - 1;
	
	return idade;
}

int main(){
	FILE *arquivo1, *arquivo2;
	char nomeArquivo[30], nome[30];
	int dia, mes, ano, diaAtual, mesAtual, anoAtual, idade;
	printf("Digite o nome do arquivo: ");
	scanf("%s", nomeArquivo);
	printf("Digite a data atual: ");
	scanf("%d%d%d", &diaAtual, &mesAtual, &anoAtual);

	arquivo1 = fopen(nomeArquivo, "r");
	if(arquivo1 == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}
	arquivo2 = fopen("arquivoGerado.txt", "w+");
		if(arquivo2 == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}
	fgets(nome, 30, arquivo1);
	while(!(feof(arquivo1))){
		if(feof(arquivo1))
			break;
		fscanf(arquivo1, "%d%d%d", &dia, &mes, &ano);
		fprintf(arquivo2, "%s", nome);
		idade = calcularIdade(dia, mes, ano, diaAtual, mesAtual, anoAtual);
		fprintf(arquivo2, "%d", idade);
		fgets(nome, 30, arquivo1);
	}
	fclose(arquivo1);
	fclose(arquivo2);
	return 0;
}