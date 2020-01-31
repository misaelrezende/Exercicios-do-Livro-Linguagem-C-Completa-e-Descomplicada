#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
    
    Crie um arquivo de teste
    para checar o funcionamento do programa
*/

// função retirada do exercício 12 do capítulo 9.4.3
void converteDecimalParaBinario(FILE *arquivo, int n){
  if(n == 1){
    fprintf(arquivo, "%d", n % 2);
    return;
  }
  // Em C a divisao de inteiro impar por dois arredonda o valor para baixo
  // ou seja, 9 / 2 = 4.5 que arredondado para baixo eh 4
  converteDecimalParaBinario(arquivo, n / 2);
  fprintf(arquivo, "%d", n % 2);
}

int main(){
	FILE *arquivo;
	int numero;

	arquivo = fopen("arquivoGerado.txt", "w+");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}

	scanf("%d", &numero);
	while(numero >= 0){
		converteDecimalParaBinario(arquivo, numero);
		fprintf(arquivo, "\n");
		scanf("%d", &numero);
	}
	fclose(arquivo);
	return 0;
}