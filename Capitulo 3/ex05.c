#include <stdio.h>

int main(){
    int idade, ano_atual, ano_nascimento;
    printf("Digite a idade e o ano atual: ");
    scanf("%d%d", &idade, &ano_atual);
    ano_nascimento = ano_atual - idade;
    printf("%d", ano_nascimento);
    return 0;
}