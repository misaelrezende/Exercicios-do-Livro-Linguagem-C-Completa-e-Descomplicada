#include <stdio.h>
struct Pessoa{
    int idade;
    char nome[50], endereco[50];
};
int main(){
    struct Pessoa p1;

    printf("Digite o nome: ");
    // a funcao fgets le todos os caracteres (inclusive '\n') 
    // ate encontrar um \n
    fgets(p1.nome, 50, stdin);
    printf("Digite a idade: ");
    scanf("%d", &p1.idade);
    // limpando o buffer do teclado -- leia a secao na pag 138 e
    // o quadro de alerta da pag 289
    setbuf(stdin, NULL);
    printf("Digite o endereco: ");
    fgets(p1.endereco, 50, stdin);

    printf("Nome: %sIdade: %d\nEndereco: %s\n", p1.nome, p1.idade, p1.endereco);
    return 0;
}