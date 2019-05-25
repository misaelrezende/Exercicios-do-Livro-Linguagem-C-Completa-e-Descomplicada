#include <stdio.h>
#include <string.h>

float calcularMedia(float n1, float n2, float n3, char *operacao){
    float resultado;
    char A[2] = "A\0";
    if(strcmp(operacao, A) == 0)
        resultado = (n1 + n2 + n3) / 3;
    else // "considero" que o usuario digitara P
        resultado = (n1 * 5 + n2 * 3 + n3 * 2) / (5+3+2);
    return resultado;
}

int main(){
    float n1, n2, n3, resultado;
    char letra[2];
    printf("Digite as tres notas: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    printf("Digite a letra (maiuscula): ");
    scanf("%s", letra);
    letra[1] = '\0'; // "gambiarra" para fazer a funcao STRCMP funcionar
    resultado = calcularMedia(n1, n2, n3, letra);
    printf("%f\n", resultado);
    return 0;
}