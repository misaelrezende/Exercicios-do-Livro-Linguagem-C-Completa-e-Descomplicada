#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
    
    Crie um arquivo de teste
    para checar o funcionamento do programa
*/

struct Aluno{
	int matricula, nota1, nota2, nota3;
	char nome[30];
};

int main(){
	FILE *arquivo;
	char nomeArquivo[30];
	struct Aluno aluno1;
	scanf("%s", nomeArquivo);
	arquivo = fopen(nomeArquivo, "r");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}
	
	fscanf(arquivo, "%d", &aluno1.matricula);
	fscanf(arquivo, "%s", aluno1.nome);
	fscanf(arquivo, "%d%d%d", &aluno1.nota1, &aluno1.nota2, &aluno1.nota3);
	
	printf("Matricula: %d\n", aluno1.matricula);
	printf("Nome: %s\n", aluno1.nome);
	printf("Notas: %d %d %d\n", aluno1.nota1, aluno1.nota2, aluno1.nota3);
	fclose(arquivo);
	return 0;
}