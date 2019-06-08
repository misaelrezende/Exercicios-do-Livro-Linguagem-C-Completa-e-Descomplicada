#include <stdio.h>

typedef struct{
    char nome[50], esporte[50];
    int idade;
    float altura;
} Atleta;

void exibeAtleta(Atleta *Atletas){
  Atleta maisAlto, maisVelho;
  int i;
  maisAlto = Atletas[0];
  maisVelho = Atletas[0];
  for(i = 1; i < 5; i++){
    if(maisAlto.altura < Atletas[i].altura)
      maisAlto = Atletas[i];
    if(maisVelho.idade < Atletas[i].idade)
      maisVelho = Atletas[i];
  }
  printf("\nAtleta mais alto: %s\n", maisAlto.nome);
  printf("Atleta mais velho: %s\n", maisVelho.nome);
}

int main(){
    Atleta Atletas[5];
    int i;
    for(i = 0; i < 5; i++){
      setbuf(stdin, NULL);
      // primeiro digite o nome e aperte "ENTER"
      fgets(Atletas[i].nome, 48, stdin);
      setbuf(stdin, NULL);
      // depois digite o nome do esporte e aperte "ENTER"
      fgets(Atletas[i].esporte, 48, stdin);
      // por ultimo digite a idade e a altura
      scanf("%d%f", &Atletas[i].idade, &Atletas[i].altura);
    }
    exibeAtleta(Atletas);
    return 0;
}

