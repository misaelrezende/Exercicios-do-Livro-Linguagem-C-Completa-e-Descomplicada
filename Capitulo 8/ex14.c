#include <stdio.h>

/*  Não sei se essa implementação é a esperada para a resolução do 
    exercício proposto mas... 
*/

enum Compra{farinha=1, fuba, macarrao, leite, cafe, arroz, acucar, biscoito,
            alho, palmito};

int main(){
    int n;
    scanf("%d", &n);
    if(n == farinha)
        printf("farinha R$2,00\n");
    else if(n == fuba)
        printf("fuba R$2,20\n");
    else if(n == macarrao)
        printf("macarrao R$2,75\n");
    else if(n == leite)
        printf("leite R$3,59\n");
    else if(n == cafe)
        printf("cafe R$4,99\n");
    else if(n == arroz)
        printf("arroz R$14,99\n");
    else if(n == acucar)
        printf("acucar R$7,49\n");
    else if(n == biscoito)
        printf("biscoito R$2,45\n");
    else if(n == alho)
        printf("alho R$20,00\n");
    else if(n == palmito)
        printf("palmito R$19,99\n");
    else
        printf("Valor invalido. Digite um valor entre 1 e 10\n");
    
    return 0;
}