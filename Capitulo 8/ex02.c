#include <stdio.h>
#include <math.h>

struct Ponto{
  int x, y;
};

int main(){
  // inicializando a estrutura "origem" com os valores "x = 0" e "y = 0"
  struct Ponto p, origem = {0, 0};
  printf("Digite as coordenadas x e y: ");
  scanf("%d%d", &p.x, &p.y);

  int distancia = sqrt(pow((p.x - origem.x), 2) + pow((p.y - origem.y), 2));
  printf("A distancia entre o ponto e a origem eh: %d\n", distancia);
  return 0;
}
