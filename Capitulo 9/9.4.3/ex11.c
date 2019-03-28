#include <stdio.h>

/* 
    ---->>>>>>>>>  NAO ESTA PRONTO NAO  <<<<<<<<<<-----
*/

void inverteNumero(int n){
    printf("%d", n % 10);
    if(n % 10 < 10){
        printf("%d", n % 10);
        return;
    }
    return inverteNumero(n % 10);
}

int main(){
    int n;
    scanf("%d", &n);
    inverteNumero(n);
    printf("\n");
    return 0;
}