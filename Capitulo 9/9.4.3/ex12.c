#include <stdio.h>

void converteDecimalParaBinario(int n){
  if(n == 1){
    printf("%d", n % 2);
    return;
  }
  // Em C a divisao de inteiro impar por dois arredonda o valor para baixo
  // ou seja, 9 / 2 = 4.5 que arredondado para baixo eh 4
  converteDecimalParaBinario(n / 2);
  printf("%d", n % 2);
}

int main(){
  int n;
  scanf("%d", &n);
  converteDecimalParaBinario(n);
  printf("\n");
  return 0;
}
