#include <stdio.h>

union tipo{
    int n;
    char s;
};

int main(){
    union tipo t;
    t.n = 65;
    printf("%c\n", t.s);
    return 0;
}