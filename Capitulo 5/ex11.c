#include <stdio.h>

int main(){
    int n, i;
    // assumo que sera digitado apenas numeros positivos
    scanf("%d", &n); 
    for(i = 1; i <= n; i++){
        if(n % i == 0)
            printf("%d ", i);
    }
    return 0;
}