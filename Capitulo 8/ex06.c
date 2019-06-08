#include <stdio.h>

struct Alunos{
    int matricula;
    float notas[3];
    char nome[50];
};

int main(){
    struct Alunos alunos[5];
    int i, j, indiceAluno = 0;
    /* -->> COLOQUE AS ENTRADAS do programa como sugerido abaixo e o programa funcionara
       corretamente                                                                     <<--
       Primeiro digite a matricula do aluno e aperte 'enter'
       Depois digite o nome do aluno e aperte 'enter'
       Depois digite as tres notas do aluno e aperte 'enter'
    */
    for(i = 0; i < 5; i++){
        scanf("%d", &alunos[i].matricula);
        setbuf(stdin, NULL);
        fgets(alunos[i].nome, 50, stdin);
        scanf("%f%f%f", &alunos[i].notas[0], &alunos[i].notas[1], &alunos[i].notas[2]);
        setbuf(stdin, NULL);
    }

    // medias eh o vetor com media das notas de cada aluno
    float medias[5], maiorMedia;
    for(i = 0; i < 5; i++){
        medias[i] = alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2];
        medias[i] /= 3; // cuidado com divisao por inteiros
    }
    
    maiorMedia = medias[0];
    for(i = 1; i < 5; i++){
        if(maiorMedia < medias[i]){
            maiorMedia = medias[i];
            indiceAluno = i;
        }
    }
    /* Laco retira o caractere '\n' lido pelo fgets*/
    for(i = 0; i < 5; i++){
        for(j = 0;; j++){
            if(alunos[i].nome[j] == '\n'){
                alunos[i].nome[j] = '\0';
                break;
            }
        }
    }
    printf("O aluno com a maior media eh o aluno %s e a media das notas dele foi %f\n",
        alunos[indiceAluno].nome, maiorMedia);
    return 0;
}