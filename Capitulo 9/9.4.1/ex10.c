#include <stdio.h>
#include <string.h>

float efetuaOperacao(float n1, float n2, char *simbolo){
    float resultado;
    char mais[2] = "+\0", menos[2] = "-\0", multiplicacao[2] = "*\0";
    if(strcmp(simbolo, mais) == 0)
        resultado = n1 + n2;
    else if(strcmp(simbolo, menos) == 0)
        resultado = n1 - n2;
    else if(strcmp(simbolo, multiplicacao) == 0)
        resultado = n1 * n2;
    else // "considero" que o usuario tera digitado /
        resultado = n1 / n2;
    return resultado;
}

int main(){
    float n1, n2, resultado;
    char simbolo[2];
    printf("Digite os dois valores: ");
    scanf("%f%f", &n1, &n2);
    printf("Digite o operador (+ ou - ou * ou /): ");
    scanf("%s", simbolo);
    simbolo[1] = '\0';
    resultado = efetuaOperacao(n1, n2, simbolo);
    printf("%f\n", resultado);
    return 0;
}