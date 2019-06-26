#include <stdio.h>

int main(){
    char S[50];
    int i, j, aux;
    fgets(S, 50, stdin);
    scanf("%d%d", &i, &j);

    for(aux = 0; S[aux] != '\0'; aux++)
        if(aux >= i && aux <= j)
            printf("%c", S[aux]);
    printf("\n");
    return 0;
}