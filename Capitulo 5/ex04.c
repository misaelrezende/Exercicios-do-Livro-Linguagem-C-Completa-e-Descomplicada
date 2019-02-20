#include <stdio.h>

int main(){
    int i, cont; // cont eh um contador
    for(i = 1, cont = 0; cont < 5; i++){
        if(i % 3 == 0){
            printf("%d ", i);
            cont++;
        }
    }
    return 0;
}