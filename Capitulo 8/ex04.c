#include <stdio.h>
#include <math.h>

struct Ponto{
    int x, y;
};
struct Retangulo{
    // p1 = ponto superior esquerdo
    // p2 = ponto inferior direito
    struct Ponto p1, p2;
};

int main(){
    struct Retangulo ret1;
    int area, diagonal, perimetro;
    printf("Digite o ponto superior esquerdo e o inferior direito: ");
    scanf("%d%d%d%d", &ret1.p1.x, &ret1.p1.y, &ret1.p2.x, &ret1.p2.y);
    
    area = (ret1.p1.y - ret1.p2.y) * (ret1.p2.x - ret1.p1.x);
    diagonal = sqrt((pow(ret1.p2.x - ret1.p1.x, 2) + pow(ret1.p2.y - ret1.p1.y, 2)));
    perimetro = ((ret1.p1.y - ret1.p2.y) + (ret1.p2.x - ret1.p1.x)) * 2;
    printf("Area: %d\nComprimento da diagonal: %d\nPerimetro: %d\n", area, diagonal, perimetro);
    return 0;
}