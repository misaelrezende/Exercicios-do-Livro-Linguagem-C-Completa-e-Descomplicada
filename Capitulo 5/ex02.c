#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    // imprimindo na ordem decrescente (de N a 0)
    for(i = n; i >= 0; i--){
        printf("%d ", i);
    }
    return 0;
}