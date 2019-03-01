#include <stdio.h>

int main(){
    float a, b, resultado;
    char n;
    printf("Digite:\n1: Adicao\n2: Subtracao\n3: Multiplicacao\n4: Divisao\n");
    scanf("%c", &n);
    printf("Digite os dois numeros: ");
    scanf("%f%f", &a, &b);
    switch (n){
        case '1': {
            resultado = a + b;
            printf("%f", resultado);
            break;
        }
        case '2': {
            resultado = a - b;
            printf("%f", resultado);
            break;
        }
        case '3': {
            resultado = a * b;
            printf("%f", resultado);
            break;
        }
        case '4': {
            resultado = a / b;
            printf("%f", resultado);
            break;
        }
        default:
            printf("Entrada Invalida!");
    }
    return 0;
}