#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("Numero par");
    else
        printf("Numero impar");
    return 0;
}