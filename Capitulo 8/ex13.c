#include <stdio.h>

/*  Não sei se essa implementação é a esperada para a resolução do 
    exercício proposto mas... 
*/

enum Mes{Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto,
    Setembro, Outubro, Novembro, Dezembro};

int main(){
    enum Mes meses;
    int n;
    scanf("%d", &n);
    if(n == Janeiro)
        printf("Janeiro 31 dias\n");
    else if(n == Fevereiro)
        printf("Fevereiro 28 dias\n");
    else if(n == Marco)
        printf("Marco 31 dias\n");
    else if(n == Abril)
        printf("Abril 30 dias\n");
    else if(n == Maio)
        printf("Maio 31 dias\n");
    else if(n == Junho)
        printf("Junho 30 dias\n");
    else if(n == Julho)
        printf("Julho 31 dias\n");
    else if(n == Agosto)
        printf("Agosto 31 dias\n");
    else if(n == Setembro)
        printf("Setembro 30 dias\n");
    else if(n == Outubro)
        printf("Outubro 31 dias\n");
    else if(n == Novembro)
        printf("Novembro 30 dias\n");
    else if(n == Dezembro)
        printf("Dezembro 31 dias\n");
    else
        printf("Entrada invalida. Digite um valor entre 1 e 12\n");
    return 0;
}