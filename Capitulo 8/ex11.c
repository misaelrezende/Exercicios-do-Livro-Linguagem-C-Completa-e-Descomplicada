#include <stdio.h>

enum Mes{Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto,
    Setembro, Outubro, Novembro, Dezembro};

typedef struct data{
    int dia, mes, ano;
} Data;

int retornaQuantidadeDeDias(int mes){
    if(mes == Janeiro)
        return 31;
    else if(mes == Fevereiro)
        return 28; // nao levo em conta ano bissexto nesse caso
    else if(mes == Marco)
        return 31;
    else if(mes == Abril)
        return 30;
    else if(mes == Maio)
        return 31;
    else if(mes == Junho)
        return 30;
    else if(mes == Julho)
        return 31;
    else if(mes == Agosto)
        return 31;
    else if(mes == Setembro)
        return 30;
    else if(mes == Outubro)
        return 31;
    else if(mes == Novembro)
        return 30;
    else
        return 31;
}

int main(){
    Data d1, d2;
    int numeroDeDias = 0, mesAtual, aux;
    /* 
        Espera-se que seja passada a data mais antiga primeiro
        e a data mais nova por ultimo
     */
    scanf("%d%d%d", &d1.dia, &d1.mes, &d1.ano);
    scanf("%d%d%d", &d2.dia, &d2.mes, &d2.ano);

    // estou usando função, matéria que está no Capítulo 9 do livro,
    // para evitar repeticao de codigo
    

    if(d1.ano == d2.ano){ // se no mesmo ano
        if(d1.mes == d2.mes){ // se mesmo mes
            numeroDeDias = d2.dia - d1.dia; // calcula diferenca de dias entao
        }else{
            mesAtual = d1.mes;
            aux = retornaQuantidadeDeDias(mesAtual);
            numeroDeDias += (aux - d1.dia); // calcula os dias que faltam para fechar o mes

            if(mesAtual != d2.mes){ // calcula os dias dos meses que faltam
                mesAtual++;
                while(mesAtual < d2.mes){
                    aux = retornaQuantidadeDeDias(mesAtual);
                    numeroDeDias += aux;
                    mesAtual++;
                }
            }
            numeroDeDias += d2.dia;
        }
    }else{// anos diferentes
        mesAtual = d1.mes;
        aux = retornaQuantidadeDeDias(mesAtual);
        numeroDeDias += (aux - d1.dia); // calcula os dias que faltam para fechar o mes
        int anoAtual = d1.ano;
        
        // contando os dias para finalizar o ano da primeira data
        if(anoAtual != d2.ano){
            mesAtual++;
            while(mesAtual <= 12){
                aux = retornaQuantidadeDeDias(mesAtual);
                numeroDeDias += aux;
                mesAtual++;
            }
        }

        // agora contando os dias do(s) proximo(s) ano(s) 
        // ate o ultimo ano antes do ano da segunda data
        anoAtual = d1.ano + 1;
        while(anoAtual < d2.ano){
            numeroDeDias += 365; // nao contando com ano bissexto
            anoAtual++;
        }

        // agora contando os dias do ultimo ano
        mesAtual = 1;
        while(mesAtual < d2.mes){
            aux = retornaQuantidadeDeDias(mesAtual);
            numeroDeDias += aux;
            mesAtual++;
        }
        numeroDeDias += d2.dia;
    }
    printf("%d\n", numeroDeDias);
    return 0;
}