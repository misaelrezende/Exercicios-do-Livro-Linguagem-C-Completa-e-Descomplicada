#include <stdio.h>

void procurarMaiorElemento(int *vetor, int n, int *maior, int *quantidade){
  int i;
  *maior = vetor[0];

  // separando em duas partes...
  // primeiro procure o maior elemento
  for(i = 0; i < n; i++)
    if(*maior < vetor[i])
      *maior = vetor[i];

  // depois veja quantas vezes ele aparece no vetor
  *quantidade = 0;
  for(i = 0; i < n; i++)
    if(vetor[i] == *maior)
      *quantidade = *quantidade + 1;
}

int main(){
  int n, maior, quantidade;
  printf("Digite quanto numeros serao inseridos no vetor: ");
  scanf("%d", &n);

  int vetor[n], i;
  printf("Digite os elementos: ");
  for(i = 0; i < n; i++)
    scanf("%d", &vetor[i]);

  procurarMaiorElemento(vetor, n, &maior, &quantidade);
  printf("Maior: %d\nQuantidade de vezes que aparece no vetor: %d\n", maior, quantidade);
  return 0;
}
