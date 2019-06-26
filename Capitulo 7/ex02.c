#include <stdio.h>

int main(){
    char palavra[50];
    int i;
    fgets(palavra, 50, stdin);
    for(i = 0; i < 4; i++)
        printf("%c", palavra[i]);
    printf("\n");
    return 0;
}