#include <stdio.h>

struct Aluno{
    int matricula;
    char nome[100];
    float prova1, prova2, prova3;
};

void calcularMediaIndividual(struct Aluno *Alunos, int n, float *mediaIndividual){
    int i;
    for(i = 0; i < n; i++){
        mediaIndividual[i] = 
        (float)(Alunos[i].prova1 + Alunos[i].prova2 +Alunos[i].prova3) / 3;
    }
}

int calcularMaiorMedia(struct Aluno *Alunos, int n){
    float mediaIndividual[n];
    calcularMediaIndividual(Alunos, n, mediaIndividual);
    int i, maior = mediaIndividual[0], indice = 0;
    
    for(i = 1; i < n; i++)
        if(maior < mediaIndividual[i]){
            maior = mediaIndividual[i];
            indice = i;
        }
    return indice;
}
int main(){
    int n, i, indice;
    printf("Digite quantos alunos serao: ");
    scanf("%d", &n);
    struct Aluno Alunos[n];
    
    printf("Digite os dados dos alunos na seguinte ordem:\n");
    printf("matricula\nnome\nprova 1, prova 2, prova 3\n");
    printf("Dados: ");
    for(i = 0; i < n; i++){
        scanf("%d", &Alunos[i].matricula);
        setbuf(stdin, NULL);
        fgets(Alunos[i].nome, 98, stdin);
        scanf("%f%f%f", &Alunos[i].prova1, &Alunos[i].prova2, &Alunos[i].prova3);
    }

    indice = calcularMaiorMedia(Alunos, n);
    printf("%d\n", indice);

    return 0;
}