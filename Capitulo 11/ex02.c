#include <stdio.h>

struct aluno{
    int matricula;
    char nome[50];
    float nota1, nota2, nota3;
};

int main(){
    printf("Tamanho struct aluno: %d\n", (int) sizeof(struct aluno));
    return 0;
}