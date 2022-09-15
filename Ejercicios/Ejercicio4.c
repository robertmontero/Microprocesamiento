#include <stdlib.h>
#include <stdio.h>

float area(float ancho, float largo){
	float resultado;
	return resultado=ancho*largo;
}


int main(void){
	float ancho;
	float largo;
	printf("Ingrese el ancho de la habitacion en metros:=>");
    scanf("%f",&ancho);
    printf("Ingrese el largo de la habitacion en metros:=>");
    scanf("%f",&largo);
    
    printf("El area de la habitacion es de %.2f metros cuadrados",area(ancho,largo));
    return 0;
}