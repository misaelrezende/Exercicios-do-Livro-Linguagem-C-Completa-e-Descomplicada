#include <stdio.h>

/*  Não sei se essa implementação é a esperada para a resolução do 
    exercício proposto mas... 
*/

// considerando Domingo como o primeiro dia da semana
enum Semana{Domingo = 1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

int main(){
    enum Semana s;
    int n;
    scanf("%d", &n);
    if(Domingo == n)
        printf("Domingo\n");
    else if(Segunda == n)
        printf("Segunda\n");
    else if(Terca == n)
        printf("Terca\n");
    else if(Quarta == n)
        printf("Quarta\n");
    else if(Quinta == n)
        printf("Quinta\n");
    else if(Sexta == n)
        printf("Sexta\n");
    else if(Sabado == n)
        printf("Sabado\n");
    else
        printf("Valor errado. Insira um valor entre 1 e 7\n");
    return 0;
}