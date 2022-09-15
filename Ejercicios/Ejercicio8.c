#include <stdio.h>
#include <stdlib.h>


int main(void){
  
  	int size = 0 , i = 0;
  	
  	double *veca;
  	double *vecb;
  	double suma = 0;
  	
  	printf("Ingrese el tamaño de los vectores: ");
  	scanf("%d",&size);
  	
  	veca = (double *)malloc(size*sizeof(double));
  	vecb = (double *)malloc(size*sizeof(double));
  
  	printf("Ingrese los valores del primer vector: \n");
  	
  	for(i=0;i<size;i++){
  		printf("vector 1[%d] ",i);
  		scanf("%lf", &veca[i]);
	  }
	  
	printf("Ingrese los valores del segundo vector: \n");
	
	for(i=0;i<size;i++){
		printf("Vector 2[%d]", i);
		scanf("%lf", &vecb[i]);
	}
	
	for(i=0;i<size;i++){
		suma += veca[i]*vecb[i];
	}
	
	printf("La resultado del producto escalar de los vectores es: %.1lf", suma);
	
	free(veca);
	free(vecb);
  
    return 0;
}