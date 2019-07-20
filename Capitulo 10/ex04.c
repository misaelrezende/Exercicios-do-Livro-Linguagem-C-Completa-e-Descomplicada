#include <stdio.h>

int main(){
    float matriz[3][3];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            // &(*( *(matriz + i) + j))) eh equivalente a &matriz[i][j]
            printf("%p\n", &(*( *(matriz + i) + j)) );
        }
        printf("----\n");
    }
    return 0;
}