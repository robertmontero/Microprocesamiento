#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main(void)
{	int i=0,j=0;
	int matriz[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Ingresa el numero en matriz[%d][%d]:",i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
			printf("\nMatriz normal:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",matriz[i][j]);		
		}
		printf("\n");
	}
			printf("\nMatriz Inversa:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",matriz[j][i]);
		}
		printf("\n");
	}
	
return 0;
}