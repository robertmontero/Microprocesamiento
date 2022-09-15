#include <stdlib.h>
#include <stdio.h>

float expresion(int y){
	float x = y*y + y + 1;
    return x;
}

int main(){
	
	int opcion;
	int x;
    float a,b,xnorm,xmin,xmax;
    printf("Dada la expresion x=y^2+y+1 donde y=1,2,3,..,20;\n");
	printf("=>Para normalizar ingrese: \nValor Xmin=>");
    scanf("%f",&xmin);
    printf("Valor Xmax=>");
    scanf("%f",&xmax);
    printf("\n=>Eligir intervalo: [a, b]");
	printf("\nDigite 1 intervalo: [-1, 1]\n");
    printf("Digite 2 invervalo: [1, 10]\n");
    printf("Digite 3 intervalo: [0.5, 1]\n=>");
    scanf("%d", &opcion);

    
	switch(opcion){
        case 1:
            a = -1;
            b = 1;
            break;
        case 2:
            a = 1;
            b = 10;
            break;
        case 3:
            a = 0.5;
            b = 1;
            break;
        default:
        	printf("Opcion incorrecta");
        	break;
    }
    
	printf("Intervalo:[%0.1f, %0.1f], \nValores:\n\n",a,b);
    
    for(int i=1; i<=20; i++){
        x = expresion(i);
        xnorm = a + (x - xmin)*(b - a)/(xmax - xmin);

        printf("x = %d  ---  xnor = %f\n", x, xnorm);
    }

    return 0;
}