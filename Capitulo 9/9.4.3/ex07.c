#include <stdio.h>

int expoente(int x, int y){
    if(y == 1)
        return x;
    return x * expoente(x, y - 1);
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", expoente(x, y));
    return 0;
}