#include <stdio.h>

int main(){
    float valorTotal, valorAvista, valorDesconto;
    char nomeProduto[50];
    fgets(nomeProduto, 50, stdin);
    scanf("%f", &valorTotal);

    valorDesconto = valorTotal * 0.1;
    valorAvista = valorTotal - valorDesconto;
    
    printf("Mercadoria: %sValor Total: %f\n", nomeProduto, valorTotal);
    printf("Valor do desconto: %f\nValor a vista: %f\n", valorDesconto, valorAvista);
    return 0;
}