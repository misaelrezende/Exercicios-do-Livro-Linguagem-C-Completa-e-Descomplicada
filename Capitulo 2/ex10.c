#include <stdio.h>

int main(){
    int dia, mes, ano;
    printf("Entre com o dia, mes e ano: ");
    scanf("%d%d%d", &dia, &mes, &ano);
    printf("%d/%d/%d", dia, mes, ano);
    return 0;
}