#include <stdio.h>

int converte(int horas, int minutos, int segundos){
    int total = 0;
    total += (horas * 3600);
    total += (minutos * 60);
    total += segundos;
    return total;
}

int main(){
    int horas, minutos, segundos, resultado;
    printf("Digite a(s) hora(s), minuto(s) e segundo(s): ");
    scanf("%d%d%d", &horas, &minutos, &segundos);
    resultado = converte(horas, minutos, segundos);
    printf("%d segundos\n", resultado);
    return 0;
}