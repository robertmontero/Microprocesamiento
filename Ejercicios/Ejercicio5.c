#include <stdlib.h>
#include <stdio.h>

float area(float ancho, float largo){
	float resultado;
	return resultado=ancho*largo;
}


int main(void){
	float ancho;
	float largo;
	double acres, pies;
	printf("Ingrese la longitud del campo en pies:=>");
    scanf("%f",&ancho);
    printf("Ingrese el ancho del campo en pies:=>");
    scanf("%f",&largo);
    
    pies = area(ancho,largo);
    acres = pies*0.000022957;
    printf("El area del campo es de %.2f pies cuadrados o ",pies);
    printf("de %f acres",acres);
    return 0;
}