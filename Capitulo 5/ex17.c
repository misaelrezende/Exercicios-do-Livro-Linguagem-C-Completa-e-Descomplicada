#include <stdio.h>

int main(){
    int n, i, j, aux;
    scanf("%d", &n);

    for(i = 0, aux = 1; i < n; i++){
        for(j = 0; j <= i; j++, aux++){
            printf("%d ", aux);
        }
        printf("\n");
    }
    return 0;
}