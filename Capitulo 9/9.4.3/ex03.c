#include <stdio.h>

void imprimeCrescente(int n){
  if(n == 0){
    printf("%d ", n);
    return;
  }
  imprimeCrescente(n-1);
  printf("%d ", n);
}

int main(){
  int n;
  scanf("%d", &n);
  imprimeCrescente(n);
  printf("\n");
  return 0;
}
