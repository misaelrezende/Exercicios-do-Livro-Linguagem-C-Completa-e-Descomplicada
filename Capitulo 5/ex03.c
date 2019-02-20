#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i = i + 2){
        printf("%d ", i);
    }
    return 0;
}