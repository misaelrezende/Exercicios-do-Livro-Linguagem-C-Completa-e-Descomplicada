#include <stdio.h>

int main(){
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("%d\n", n1 ^ n2); // ou exclusivo
    printf("%d\n", n1 | n2); // ou bit a bit
    printf("%d", n1 & n2); // e bit a bit
    return 0;
}