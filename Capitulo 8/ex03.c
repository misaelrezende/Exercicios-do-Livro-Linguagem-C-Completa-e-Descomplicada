#include <stdio.h>
#include <math.h>

struct Ponto{
  double x, y;
};

int main(){
  struct Ponto p, q;
  printf("Digite as coordenadas dos dois pontos: ");
  scanf("%lf%lf%lf%lf", &p.x, &p.y, &q.x, &q.y);

  double distancia = sqrt(pow((p.x - q.x), 2) + pow((p.y - q.y), 2));
  printf("A distancia entre os dois pontos: %2.2lf\n", distancia);
  return 0;
}
