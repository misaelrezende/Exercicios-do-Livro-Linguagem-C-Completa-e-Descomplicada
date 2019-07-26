#include <stdio.h>

int main(){
	int a, *b, **c, ***d;
	scanf("%d", &a);
	
	b = &a;
	*b = (*b) * 2;
	printf("dobro = %d\n", *b);
	*b = (*b) / 2;

	c = &b;
	**c = (**c) * 3;
	printf("triplo = %d\n", **c);
	**c = (**c) / 3;

	d = &c;
	***d = (***d) * 4;
	printf("quadruplo = %d\n", ***d);
	return 0;
}