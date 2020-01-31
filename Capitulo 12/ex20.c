#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	struct Atleta atletas[5], maisAlto, maisVelho;
	arquivo = fopen("arquivo", "rb");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}
	fread(atletas, sizeof(struct Atleta), 5, arquivo);
	// inicialização arbitrária
	maisAlto.altura = -10000;
	maisVelho.idade = -10000;

	for(i = 0; i < 5; i++){
		if(maisAlto.altura < atletas[i].altura){
			strcpy(maisAlto.nome, atletas[i].nome);
			maisAlto.altura = atletas[i].altura;
		}
		if(maisVelho.idade < atletas[i].idade){
			strcpy(maisVelho.nome, atletas[i].nome);
			maisVelho.idade = atletas[i].idade;
		}
	}
	
	printf("Mais alto: %s\n", maisAlto.nome);
	printf("Mais velho: %s\n", maisVelho.nome);
	fclose(arquivo);
	return 0;
}