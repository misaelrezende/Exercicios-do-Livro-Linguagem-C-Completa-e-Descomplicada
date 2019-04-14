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
    struct Ponto b1;
    printf("Digite o ponto superior esquerdo e o inferior direito: ");
    scanf("%d%d%d%d", &ret1.p1.x, &ret1.p1.y, &ret1.p2.x, &ret1.p2.y);
    printf("Digite as coordenas do ponto: ");
    scanf("%d%d", &b1.x, &b1.y);
    
    if(b1.x < ret1.p1.x || b1.x > ret1.p2.x)
        printf("O ponto esta fora do retangulo\n");
    else if(b1.y < ret1.p2.y || b1.y > ret1.p1.y)
        printf("O ponto esta fora do retangulo\n");
    else
        printf("O ponto esta no retangulo\n");
    return 0;
}