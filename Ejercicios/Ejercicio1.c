//Ejercicio 1 
/* Realice un programa que solicite un número decimal n y permita
elegir al usuario una de las tres funciones f1(n), f2(n), f3(n) para
operarlo, muestre el resultado en la pantalla. */

#include <stdlib.h>
#include <stdio.h>

int main(){
 float n;
 int caso;
 float resultado;
 printf("Escriba un numero = ");
 scanf("%f",&n);
 printf("Elegir la funcion f1(1), f2(2), f3(3)=");
 scanf("%d",&caso);
 
 
 switch(caso)
    {
        case 1:
        	resultado = n*n;
            printf("\n f1(n)=%f", resultado);
            break;
        case 2:
        	resultado = n*n + 1000*n;
            printf("\n f2(n)=%f", resultado);
            break;
        case 3:
        	if(n<=0){
        		resultado = 10;
        		printf("\n f3(n)=%f", resultado);
			}
			if(n>1 && n<5){
        		resultado = n*n - n + 1;
        		printf("\n f3(n)=%f", resultado);
			}
            if(n>5){
        		resultado = 2*n-1;
        		printf("\n f3(n)=%f", resultado);
			}
            break;
        default:
            printf("Error al elegir la funcion");
            break;
    }

 



}

