#include <stdio.h>

int main(){
    float valor;
    // considere 'm' p/ MG, 's' p/ SP, 'r' p/ RJ e 'n' p/ MS
    char estado;
    printf("Digite o valor e o estado: ");
    scanf("%f %c", &valor, &estado);
    switch (estado){
        case 'm':{
            printf("%.2f", valor + (valor * 0.07));
            break;
        }
        case 's':{
            printf("%.2f", valor + (valor * 0.12));
            break;
        }
        case 'r':{
            printf("%.2f", valor + (valor * 0.15));
            break;
        }
        case 'n':{
            printf("%.2f", valor + (valor * 0.08));
            break;
        }
        default:
            printf("Estado Invalido");
    }
    return 0;
}