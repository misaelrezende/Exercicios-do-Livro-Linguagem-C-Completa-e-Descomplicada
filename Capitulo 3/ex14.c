#include <stdio.h>

int main(){
    char a;
    int conv;
    scanf("%c", &a);
    conv = a; // pega o numero ASCII da letra lida
    conv = a + 32; // pega o seu correspondente minusculo 
    printf("%c", conv);
    return 0;
}