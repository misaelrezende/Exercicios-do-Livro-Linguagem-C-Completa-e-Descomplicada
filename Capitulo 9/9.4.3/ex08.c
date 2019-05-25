#include <stdio.h>

int multiplica(int n1, int n2){
    if(n2 == 1)
        return n1;
    return n1 + multiplica(n1, n2 - 1);
}

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d\n", multiplica(n1, n2));
    return 0;
}