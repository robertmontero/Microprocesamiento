#include <stdio.h>
#include <stdlib.h>

int main(void){
	
    int x, y;
    int *xpun, *ypun;
    
    printf("Ingrese primera variable intercambiar: ");
    scanf("%d",&x);
    printf("Ingrese segunda variable a intercambiar: ");
    scanf("%d",&y);
    
    xpun = &y;
    ypun = &x;
    
    printf("Valores ingresados=> :%d y :%d.\n",x,y);
    printf("Valores intercambiados=> :%d y :%d",*xpun,*ypun);
    
    return 0;
}