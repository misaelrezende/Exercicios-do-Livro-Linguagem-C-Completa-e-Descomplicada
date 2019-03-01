#include <stdio.h>
#include <math.h>

int main(){
    int a, b, hip;
    scanf("%d%d", &a, &b);
    hip = sqrt((a * a) + (b * b)); // eh equivalente a sqrt(pow(a, 2) + pow(b, 2));
    printf("%d", hip);
    return 0;
}