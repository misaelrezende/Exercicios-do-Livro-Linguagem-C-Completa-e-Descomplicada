#include <stdio.h>

float calculaSerieHarmonica(int n){
    if(n == 1)
        return 1; // 1/1 = 1
    float soma = (float) 1 / n;
    return soma + calculaSerieHarmonica(n-1);
}

int main(){
    int n;
    float Hn;
    scanf("%d", &n);
    Hn = calculaSerieHarmonica(n);
    printf("%f\n", Hn);
    return 0;
}