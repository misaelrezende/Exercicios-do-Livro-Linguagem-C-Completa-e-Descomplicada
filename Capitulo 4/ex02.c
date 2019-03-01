#include <stdio.h>

int main(){
    int n1, n2;
    printf("Digite os dois numeros: ");
    scanf("%d%d", &n1, &n2);
    if(n1 > n2)
        printf("%d eh maior", n1);
    else{
        if(n1 == n2)
            printf("Numeros iguais");
        else
            printf("%d eh maior", n2);
    }
    return 0;
}