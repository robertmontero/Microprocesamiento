#include <stdlib.h>
#include <stdio.h>

int main(void){
	double u[3]={1,2,3},v[3]={6,5,4};
	double A[3][3]={{1,5,0},{7,1,2},{0,0,1}};
	double B[3][3]={{-2,0,1},{1,0,0},{4,1,0}};
	double w[3],x[3],y[3][3],z[3][3],C[3][3],D[3][3];
	int i = 0,j = 0, opcion;
    printf("Oprima \n1:w=-3v \n2:x=u-v \n3:y=Au \n4:z=Au-v \n5:C=4A \n6:D=AB\n=> ");
    scanf("%d",&opcion);
	
	switch(opcion){
        case 1:
           for(i=0; i<3; i++){
           	 w[i]=u[i]*-3;
             printf("w[%d] = %.1f\n", i, w[i]);
           }
           break;
        case 2:
           for(i=0; i<3; i++){
           	 x[i]=u[i]-v[i];
             printf("x[%d] = %.1f\n", i, x[i]);
           }
           break;
        case 3:
			for(i=0; i<3; i++){
			   for(j=0; j<3; j++){
			    	y[i][j]=A[i][j]*u[j];
			       printf("y[%d][%d] = %.1f\n", i, j,y[i][j]);
			   }
			   printf("\n");
		    }
           break;
        case 4: //Revisar
			for(i=0; i<3; i++){
			   for(j=0; j<3; j++){
			    	z[i][j]=A[i][j]*u[j]-v[j];
			       printf("y[%d][%d] = %.1f\n", i, j,z[i][j]);
			   }
			   printf("\n");
		    }
           break;
        case 5:
			for(i=0; i<3; i++){
			   for(j=0; j<3; j++){
			    	C[i][j]=A[i][j]*4;
			       printf("y[%d][%d] = %.1f\n", i, j,C[i][j]);
			   }
			   printf("\n");
		    }
           break;
        case 6: //Revisar
			for(i=0; i<3; i++){
			   for(j=0; j<3; j++){
			    	D[i][j]=A[i][j]*B[i][j];
			       printf("y[%d][%d] = %.1f\n", i, j,D[i][j]);
			   }
			   printf("\n");
		    }
           break;
        default:
           printf("Opcion incorrecta");
           break;
    }
	    
    /* for(i=0; i<3; i++){
        printf("u[%d] = %.1f\n", i, u[i]);
    }
	printf("\n");
    for(i=0; i<3; i++){
        printf("v[%d] = %.1f\n", i, v[i]);
    }
    
	printf("\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("A[%d][%d] = %.1f\n", i, j,A[i][j]);
        }
     printf("\n");
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("B[%d][%d] = %.1f\n", i, j, B[i][j]);
        }
	  printf("\n");
    }*/
        
    return 0;
}