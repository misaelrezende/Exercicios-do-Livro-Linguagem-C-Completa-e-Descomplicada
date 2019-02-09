#include <stdio.h>

int main(){
    float altura, peso;
    scanf("%f%f", &altura, &peso);
    
    if(altura < 1.2){
        if(peso < 60)
            printf("A");
        else if(peso >= 60 && peso <= 90)
            printf("D");
        else
            printf("G");        
    }else if(altura >= 1.2 && altura <= 1.7){
        if(peso < 60)
            printf("B");
        else if(peso >= 60 && peso <= 90)
            printf("E");
        else
            printf("H"); 
    }else{
        if(peso < 60)
            printf("C");
        else if(peso >= 60 && peso <= 90)
            printf("F");
        else
            printf("I"); 
    }
    return 0;
}