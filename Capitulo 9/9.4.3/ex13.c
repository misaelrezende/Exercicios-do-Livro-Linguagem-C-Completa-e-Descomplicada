#include <stdio.h>
#include <math.h>

float somatorio(int n){
  if(n == 1)
    return 2; // ( (1 + (1*1)) / 1) = 2
  float soma = ((float) (1 + (pow(n, 2)))) / n;
  return soma + somatorio(n-1);
}

int main(){
  int n;
  float resultado;
  scanf("%d", &n);
  resultado = somatorio(n);
  printf("%f\n", resultado);
  return 0;
}
