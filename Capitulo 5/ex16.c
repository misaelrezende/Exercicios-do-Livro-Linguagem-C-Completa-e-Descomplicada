#include <stdio.h>

int main(){
    float numHarmonico;
    int i, n;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if (i == 1){
            numHarmonico = 1;
            continue;
        }
        numHarmonico += (float) 1 / (float) i;
    }
    printf("O numero harmonico para o n-esimo termo requerido eh %f\n", 
    numHarmonico);
    
    return 0;
}