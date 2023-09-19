#include <stdio.h>

int main()
{
	int x,suma=0,cuad;
	
	for(x=0;x<=100;x++)
	{
		cuad=x*x;
		suma+=cuad;
	}

	printf("La suma de los numeros es: %d",suma);
	return 0;
}
