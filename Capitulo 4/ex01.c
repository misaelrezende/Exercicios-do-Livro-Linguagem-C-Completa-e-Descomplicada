#include <stdio.h>

int main(){
    int n1, n2;
    printf("Digite os numeros: ");
    scanf("%d%d", &n1, &n2);
    if(n1 > n2)
        printf("%d eh maior", n1);
    else
        printf("%d eh maior", n2);
    return 0;
}