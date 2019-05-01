#include <stdio.h>

int main(){
    int matriz[5][5], i, j;
    int somaDiagonais = 0, somaForaDasDiagonais = 0, diferenca;
    printf("Digite os 25 elementos da matriz: ");

    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            scanf("%d", &matriz[i][j]);
    
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            if(i != j && (i + j != 4))
                somaForaDasDiagonais += matriz[i][j];

    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            if(i == j || (i + j == 4))
                somaDiagonais += matriz[i][j];

    diferenca = somaForaDasDiagonais - somaDiagonais;
    printf("A diferenca da soma das diagonais menos a soma dos numeros que"
    "nao estao nas diagonais eh %d\n", diferenca);
    return 0;
}