#include <stdio.h>
#include <math.h>

int main(){

        printf("Escolha uma das opcoes abaixo:\n\n");
        printf("1 - Raizes de uma Equacao do 2 Grau\n");
        printf("\n");
    int opcao;
        printf("Opcao: ");
        scanf("%d",&opcao);
        printf("\n");
    switch (opcao){
        case 1:{
            float a,b,c,delta,raiz_delta_positivo,raiz_delta_negativo;
                printf("Entre com os valores das variaveis a, b e c:");
                scanf("%f%f%f",&a,&b,&c);
                    if(a == 0){
                        printf("Esta Equacao do 2 Grau NAO eh valida!\n");
                        return 1;
                    }
                delta = (b*b)-(4*a*c);
                    if(delta < 0){
                        printf("A Equacao NAO possui RAIZES REAIS!\n");
                        return 1;
                    }
                raiz_delta_positivo = (-b+sqrt(delta))/(2*a);
                raiz_delta_negativo = (-b-sqrt(delta))/(2*a);
                printf("\n%f\n", delta);
                printf("Resultado Delta Positivo: %0.2g\n",raiz_delta_positivo);
                printf("Resultado Delta Negativo: %0.2g\n\n",raiz_delta_negativo);
            }
            break;
    }
    return 0;
}
