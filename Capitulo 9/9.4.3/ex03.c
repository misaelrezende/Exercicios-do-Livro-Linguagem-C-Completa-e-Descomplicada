#include <stdio.h>

/* 
    ---->>>>>>>>>  NAO ESTA PRONTO NAO  <<<<<<<<<<-----
*/

void imprime(int n){
	printf("%d ", n);
	if(n == 0)
    	return;
  	return imprime(n-1);
}
int main(){
  	int n;
  	scanf("%d", &n);
  	imprime(n);
	printf("\n");
  	return 0;
}