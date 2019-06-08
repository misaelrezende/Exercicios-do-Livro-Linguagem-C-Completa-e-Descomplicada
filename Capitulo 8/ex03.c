#include <stdio.h>
#include <math.h>

struct Ponto{
  int x, y;
};

int main(){
  struct Ponto p, q;
  printf("Digite as coordenadas dos dois pontos: ");
  scanf("%d%d%d%d", &p.x, &p.y, &q.x, &q.y);

  int distancia = sqrt(pow((p.x - q.x), 2) + pow((p.y - q.y), 2));
  printf("A distancia entre o ponto e a origem eh: %d\n", distancia);
  return 0;
}
