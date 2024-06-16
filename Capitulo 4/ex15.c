#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;
    printf("Digite a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);

    if(a == 0){
        printf("Nao eh uma equacao de 2º grau!\n");
        return 0;
    }

    delta = (b * b) - 4 * a * c;

    if(delta < 0){
        printf("Nao existe raiz!\n");
        return 0;
    }
    if(delta == 0){
        x1 = - b / (2 * a);
        printf("Raiz unica = %f\n", x1);
        return 0;
    }
    // o trecho abaixo so executa se todos if's acima nao forem verdadeiros
    x1 = (- b + sqrt(delta)) / (2 * a);
    x2 = (- b - sqrt(delta)) / (2 * a);
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
    return 0;
}