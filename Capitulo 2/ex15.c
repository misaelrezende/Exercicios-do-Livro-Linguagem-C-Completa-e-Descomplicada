#include <stdio.h>

int main(){
    char a;
    int num;
    float f;
    scanf("%c%d%f", &a, &num, &f);

    printf("%c %d %f\n", a, num, f);
    printf("%c\t%d\t%f", a, num, f);
    printf("\n%c\n%d\n%f", a, num, f);
    return 0;
}