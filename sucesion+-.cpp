#include <stdio.h>

int main()
{
	int x,y,cant,cant1;

	printf("Hasta que numero desea la sucesion? \n");
	scanf("%d",&cant);
	
	printf("La sucesion de %d numeros en + y - es: ",cant);
	
	for(x=1;x<=cant;x++)
	{
		printf(" %d ",x);
		y=-1*x;
		printf(" %d ",y);
	}
	/*for(y=0;y>=cant1;y--)
	{
		printf(" %d ",y);
	}*/
	return 0;
}
