#include <stdio.h>

int main(){
	/* Conversão de tipo (int) utilizada para evitar o seguinte warning
	gerado pelo compilador gcc:
	warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]

	Porém o programa também funciona corretamente sem o uso da conversão de tipo.
	*/
	printf("Tamanho char: %d\n", (int) sizeof(char));
	printf("Tamanho int: %d\n", (int) sizeof(int));
	printf("Tamanho float: %d\n", (int) sizeof(float));
	printf("Tamanho double: %d\n", (int) sizeof(double));
	return 0;
}