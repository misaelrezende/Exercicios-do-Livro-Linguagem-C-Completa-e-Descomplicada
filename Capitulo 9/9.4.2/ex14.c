#include <stdio.h>
#include <math.h>

int calcularRaizes(float a, float b, float c, float *raizDeltaPositivo,
                  float *raizDeltaNegativo){
  float delta;
  if(a == 0){
    printf("Não é equação de segundo grau\n");
    return -1;
  }

  delta = (b*b)-(4*a*c);

  if(delta < 0){
    printf("A Equacao NAO possui RAIZES REAIS!\n");
    return 0;
  }else if(delta == 0){
    *raizDeltaPositivo = (-b+sqrt(delta))/(2*a);
    return 1;
  }
  *raizDeltaPositivo = (-b+sqrt(delta))/(2*a);
  *raizDeltaNegativo = (-b-sqrt(delta))/(2*a);
  return 2;
}

int main(){
  float a, b, c, raizDeltaPositivo,raizDeltaNegativo;
  int resultado;
  printf("Entre com os valores das variaveis a, b e c:");
  scanf("%f%f%f", &a, &b, &c);

  resultado = calcularRaizes(a, b, c, &raizDeltaPositivo, &raizDeltaNegativo);
  if(resultado == 1)
    printf("%f\n", raizDeltaPositivo);
  else if(resultado == 2)
    printf("%f %f\n", raizDeltaPositivo, raizDeltaNegativo);

  return 0;
}
