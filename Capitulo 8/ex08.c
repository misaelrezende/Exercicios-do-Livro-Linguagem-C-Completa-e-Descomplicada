#include <stdio.h>

typedef struct{
    char nome[50];
    int dia, mes, ano;
} Pessoa;

void comparaIdade(Pessoa pessoa, Pessoa *menorIdade, Pessoa *maiorIdade){
    //compara pessoa e troca a menor e/ou maior se necessário
    if(menorIdade->ano <= pessoa.ano){
      if(menorIdade->ano < pessoa.ano)
        *menorIdade = pessoa;
      else{ // ano eh igual
        if(menorIdade->mes <= pessoa.mes){
          if(menorIdade->mes == pessoa.mes){
            if(menorIdade->dia < pessoa.mes)
              *menorIdade = pessoa;
          }else // se nao eh do mesmo mes, entao eh mais velha, logo troca
            *menorIdade = pessoa;
        }
      }
    }

    if(maiorIdade->ano >= pessoa.ano){
      if(maiorIdade->ano > pessoa.ano)
        *maiorIdade = pessoa;
      else{ // ano eh igual
        if(maiorIdade->mes >= pessoa.mes){
          if(maiorIdade->mes == pessoa.mes){
            if(maiorIdade->dia > pessoa.mes)
              *maiorIdade = pessoa;
          }else // se nao eh do mesmo mes, entao eh mais velha, logo troca
            *maiorIdade = pessoa;
        }
      }
    }
}

void exibePessoas(Pessoa *pessoas){
    Pessoa menorIdade, maiorIdade;
    int i;
    menorIdade = pessoas[0];
    maiorIdade = pessoas[0];
    for(i = 1; i < 6; i++){
        comparaIdade(pessoas[i], &menorIdade, &maiorIdade);
    }
    printf("\nPessoa mais nova: %s\nPessoa mais velha: %s\n",
    menorIdade.nome, maiorIdade.nome);
}

int main(){
    Pessoa pessoas[6];
    int i;
    for(i = 0; i < 6; i++){
        setbuf(stdin, NULL);
        // primeiro digite o nome da pessoa e aperte "ENTER"
        fgets(pessoas[i].nome, 48, stdin);
        // depois digite a data de nascimento da pessoa
        scanf("%d%d%d", &pessoas[i].dia, &pessoas[i].mes, &pessoas[i].ano);
    }
    exibePessoas(pessoas);
    return 0;
}

