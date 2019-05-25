#include <stdio.h>
#include <math.h>

/* programa baseado no retirado do link abaixo
    https://stackoverflow.com/a/17717071
*/

int retornaInvertido(int numero){
    if(numero < 10)
        return numero;

    return (numero % 10) * pow(10, (int)log10(numero))
            + retornaInvertido(numero / 10);
}

int main(){
    int n, resultado;
    scanf("%d", &n);
    resultado = retornaInvertido(n);
    printf("%d\n", resultado);
    return 0;
}