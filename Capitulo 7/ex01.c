#include <stdio.h>

int main(){
    char palavra[50];
    fgets(palavra, 50, stdin);
    printf("%s\n", palavra);
    return 0;
}