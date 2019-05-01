#include <stdio.h>

int main(){
    int alunos[10][3], i, j, piorProva1 = 0, piorProva2 = 0, piorProva3 = 0;
    int menor, indiceMenor;
    printf("Digite as 30 notas dos alunos: ");

    for(i = 0; i < 10; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &alunos[i][j]);

    for(i = 0; i < 10; i++){
        menor = alunos[i][0];
        indiceMenor = 0;
        for(j = 1; j < 3; j++){
            if(alunos[i][j] < menor){
                menor = alunos[i][j];
                indiceMenor = j;
            }
        }
        if(indiceMenor == 0)
            piorProva1++;
        else if(indiceMenor == 1)
            piorProva2++;
        else
            piorProva3++;
    }
    printf("Alunos com pior nota na prova 1: %d aluno(os)\n", piorProva1);
    printf("Alunos com pior nota na prova 2: %d aluno(os)\n", piorProva2);
    printf("Alunos com pior nota na prova 3: %d aluno(os)\n", piorProva3);
    return 0;
}