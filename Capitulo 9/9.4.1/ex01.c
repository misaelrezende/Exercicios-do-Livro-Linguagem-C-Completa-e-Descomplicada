#include <stdio.h>

int maiorNum(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int main(){
    int n1, n2, maior;
    scanf("%d %d", &n1, &n2);
    maior = maiorNum(n1, n2);
    printf("O maior numero eh: %d\n", maior);
    return 0;
}