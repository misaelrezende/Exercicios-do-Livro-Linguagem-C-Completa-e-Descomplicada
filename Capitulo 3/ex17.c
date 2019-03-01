#include <stdio.h>

int main(){
    /* programa inspirado na figura 3.5 da pagina 60 do livro */
    unsigned char aux;
    unsigned int n;
    scanf("%d", &n);
    aux = ~n; // "~" eh operador bit a bit
    printf("O complemento eh: %d", aux);
    return 0;
}