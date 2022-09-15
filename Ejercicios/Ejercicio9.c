#include <stdio.h>
#include <stdlib.h>

int funcion(double *suma , double *producto , double x, double y){
	int s=x+y;
	int p=x*y;
	*suma = &s;
	*producto = &p;
	return (*suma,*producto);
}


int main(void){
    double x, y,suma,producto;
    double *suma=0, *producto=0;
    
    printf("Ingrese primera variable intercambiar: ");
    scanf("%f",&x);
    printf("Ingrese segunda variable a intercambiar: ");
    scanf("%f",&y);
    
    funtion(*suma,*producto,x,y);
    
    printf("Valores ingresados=> :%d y :%d.\n",x,y);
    printf("Valores intercambiados=> :%d y :%d",*suma,*producto);
    
    return 0;
}
