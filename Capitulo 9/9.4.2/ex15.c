#include <stdio.h>

void procurarMaiorEMenorElemento(int *vetor, int n, int *maior, int *menor){
  int i;
  *maior = vetor[0];
  *menor = vetor[0];
  for(i = 0; i < n; i++){
    if(*maior < vetor[i])
      *maior = vetor[i];
    if(*menor > vetor[i])
      *menor = vetor[i];
  }
}

int main(){
  int n, maior, menor;
  printf("Digite quanto numeros serao inseridos no vetor: ");
  scanf("%d", &n);

  int vetor[n], i;
  printf("Digite os elementos: ");
  for(i = 0; i < n; i++)
    scanf("%d", &vetor[i]);

  procurarMaiorEMenorElemento(vetor, n, &maior, &menor);
  printf("Maior: %d\nMenor: %d\n", maior, menor);
  return 0;
}
