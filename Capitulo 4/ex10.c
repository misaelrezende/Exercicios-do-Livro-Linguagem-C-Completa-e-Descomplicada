#include <stdio.h>
#include <math.h>
int main(){
    float x, y, z, num_digitado, media;
    printf("Digite o valor numerico e os tres valores inteiros: ");
    scanf("%f%f%f%f", &num_digitado, &x, &y, &z);
    
    // o codigo abaixo poderia usar switch no lugar do aninhamento de if's
    if(num_digitado == 1){
        // a definicao de media geometrica eh pow(a1 * a2 * an, 1/n)
        media = pow(x * y * z, 1 / 3);
        printf("media = %f", media);
    }else if(num_digitado == 2){
        media = (x + 2 * y + 3 * z) / 6;
        printf("media = %f", media);
    }else if(num_digitado == 3){
        media = 1 / (1/x) + (1/y) + (1/z);
        printf("media = %f", media);
    }else{
        media = (x + y + z) / 3;
        printf("media = %f", media);
    }
    return 0;
}