#include <stdio.h>

void imprimeVetor(char *mensagem){
  int i;
  for(i = 0; *(mensagem + i) != '\0'; i++)
    printf("%c", *(mensagem + i));
}

int main(){
  char palavra[50] = "Voce ja assistiu o filme Poeira em alto mar?\n";
  imprimeVetor(palavra);
  return 0;
}