#include <stdio.h>

int main(){
    float altura;
    char sexo; // m ou f
    /* repare no 1º scanf abaixo. Ele tem um espaco depois da tag %f e
    isso eh necessario pois como a 2ª entrada eh de um char,
    o valor lido a ser guardado na variavel (sexo) poderia ser o espaco (que eh um caractere valido)
    ou o \n (idem). Portanto para "descartar" o espaco (ou \n) digitado entre a 
    primeira entrada e a segunda entrada, o espaco extra no 1º scanf se faz necessario */
    scanf("%f ", &altura); // exemplo 1.75
    scanf("%c", &sexo); // exemplo m
    switch(sexo){
        case 'm':{
            printf("%f", ((72.7 * altura) - 58));
            break;
        }
        case 'f':{
            printf("%f", ((62.1 * altura) - 44.7));
        }
    }
    return 0;
}