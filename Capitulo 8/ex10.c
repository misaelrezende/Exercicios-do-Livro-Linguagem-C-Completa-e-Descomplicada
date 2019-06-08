#include <stdio.h>
#define Troca( A,  B) {Atleta aux = A; A = B; B = aux; }

typedef struct{
    char nome[50], esporte[50];
    int idade;
    float altura;
} Atleta;

void Bolha (Atleta *v, int n){
    int i, j;
    for(i = 0; i < n-1; i++)
        for(j = 1; j < n-i; j++)
            if(v[j].idade > v[j-1].idade)
                Troca(v[j-1], v[j]);
}


void exibeAtleta(Atleta *Atletas){
    int i;
    // ordena os atletas em ordem decrescente
    Bolha(Atletas, 5);

    for(i = 0; i < 5; i++)
        printf("\nnome: %sesporte: %sidade: %d\naltura: %f\n",
        Atletas[i].nome, Atletas[i].esporte,
        Atletas[i].idade, Atletas[i].altura);
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