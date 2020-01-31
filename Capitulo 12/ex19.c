#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
*/

struct Atleta{
	char nome[30], esporte[30];
	int idade;
	float altura;
};

int main(){
	FILE *arquivo;
	int i;
	struct Atleta atletas[5];
	arquivo = fopen("arquivo", "wb+");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}
	
	for(i = 0; i < 5; i++){
		setbuf(stdin, NULL);
		// scanf("%s", atletas[i].nome);
		fgets(atletas[i].nome, 30, stdin);
		setbuf(stdin, NULL);
		// scanf("%s", atletas[i].esporte);
		fgets(atletas[i].esporte, 30, stdin);
		// setbuf(stdin, NULL);
		scanf("%d%f", &atletas[i].idade, &atletas[i].altura);
		// printf("-->%s %s %d %f\n", atletas[i].nome, atletas[i].esporte, atletas[i].idade, atletas[i].altura);
		// printf("i: %d", i);
	}
	
	fwrite(&atletas, sizeof(struct Atleta), 5, arquivo);
	fclose(arquivo);
	return 0;
}