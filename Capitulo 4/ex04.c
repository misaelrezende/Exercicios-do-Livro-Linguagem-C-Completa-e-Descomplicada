#include <stdio.h>

int main(){
    float salario, prestacao;
    scanf("%f%f", &salario, &prestacao);
    if(prestacao > (salario * 0.20))
        printf("Emprestimo nao concedido");
    else
        printf("Emprestimo concedido");
    return 0;
}