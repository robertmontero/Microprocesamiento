#include <stdlib.h>
#include <stdio.h>

float CaF(float temp){
    float Fahrenheit;
    Fahrenheit = 1.8*temp + 32;
    return Fahrenheit;
}

float FaC(float temp){
    float Celsius;
    Celsius = (temp - 32)/1.8;
    return Celsius;
}

int main(){

    float temp;
    char opcion;
    printf("Temperatura => ");
    scanf("%f",&temp);
    printf("Oprima \nf:minuscula para pasar de Celsius a Fahrenheit \nc:minuscula para pasar de Fahrenheit a Celsius \n=> ");
    scanf("%s",&opcion);
   
    switch(opcion){
        case 'f':
           printf("Temperatura = %.2f *F",CaF(temp));
           break;
        case 'c':
           printf("Temperatura = %.2f *C",FaC(temp));
           break;
        default:
           printf("Opcion incorrecta");
           break;
    }

    return 0;
}