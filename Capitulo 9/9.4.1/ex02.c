#include <stdio.h>

// prototipo da funcao
// tambem conhecido como "assinatura da funcao" 
void retornaMes(int);

int main(){
    int n;
    scanf("%d", &n);
    retornaMes(n);
    return 0;
}

void retornaMes(int mes){
    switch(mes){
        case 1:{
            printf("Janeiro -- 31 dias\n");
            break;
        }case 2:{
            printf("Fevereiro\n28 dias -- Ano nao bissexto\n29 dias -- Ano bissexto\n");
            break;
        }case 3:{
            printf("Marco -- 31 dias\n");
            break;
        }case 4:{
            printf("Abril -- 30 dias\n");
            break;
        }case 5:{
            printf("Maio -- 31 dias\n");
            break;
        }case 6:{
            printf("Junho -- 30 dias\n");
            break;
        }case 7:{
            printf("Julho -- 31 dias\n");
            break;
        }case 8:{
            printf("Agosto -- 31 dias\n");
            break;
        }case 9:{
            printf("Setembro -- 30 dias\n");
            break;
        }case 10:{
            printf("Outubro -- 31 dias\n");
            break;
        }case 11:{
            printf("Novembro -- 30 dias\n");
            break;
        }case 12:{
            printf("Dezembro -- 31 dias\n");
            break;
        }
    }        
    return;
}