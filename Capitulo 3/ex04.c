#include <stdio.h>

int main(){
    float n1, n2, n3, n4, soma, media;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    soma = n1 + n2 + n3 + n4;
    media = soma / 4;
    printf("%f", media);   
    return 0;
}