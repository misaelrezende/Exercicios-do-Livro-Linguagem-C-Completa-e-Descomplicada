#include <stdio.h>

int main(){
    int i, cont, soma = 0;
    for(i = 2, cont = 0; cont < 50; i += 2, cont++){
        soma += i;
    }
    printf("%d", soma);
    return 0;
}