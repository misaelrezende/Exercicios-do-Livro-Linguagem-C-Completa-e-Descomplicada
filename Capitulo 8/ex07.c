#include <stdio.h>

struct Horario{
    int hora, minuto, segundo;
};

void achaMaiorHora(struct Horario *Hora){
    int i;
    struct Horario MaiorHorario;
    MaiorHorario.hora = Hora[0].hora;
    MaiorHorario.minuto = Hora[0].minuto;
    MaiorHorario.segundo = Hora[0].segundo;

    for(i = 1; i < 5; i++){
        if(MaiorHorario.hora <= Hora[i].hora){
            if(MaiorHorario.hora == Hora[i].hora){
                if(MaiorHorario.minuto <= Hora[i].minuto){
                    if(MaiorHorario.minuto == Hora[i].minuto){
                        if(MaiorHorario.segundo <= Hora[i].segundo){
                            if(MaiorHorario.segundo == Hora[i].segundo)
                                MaiorHorario = Hora[i];
                            else // segundo eh menor
                                MaiorHorario = Hora[i];
                        }
                    }else // minuto eh menor
                        MaiorHorario = Hora[i];
                }
            }else // se nao eh igual entao eh menor
                MaiorHorario = Hora[i];
        }
            
    }
    printf("%d:%d:%d\n", MaiorHorario.hora, MaiorHorario.minuto,
    MaiorHorario.segundo);
}

int main(){
    struct Horario Hora[5];
    int i;
    for(i = 0; i < 5; i++)
        scanf("%d%d%d", &Hora[i].hora, &Hora[i].minuto, &Hora[i].segundo);
    achaMaiorHora(Hora);
    return 0;
}