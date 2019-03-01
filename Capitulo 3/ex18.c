#include <stdio.h>

int main(){
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    
    /* se entendi bem o enunciado ... */
    printf("%d\n", n1 << n2);
    printf("%d", n1 >> n2);
    return 0;
}