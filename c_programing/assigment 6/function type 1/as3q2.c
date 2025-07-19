#include <stdio.h>
void inc();
void main ()
{
	inc();
}
void inc()
{
	int i =5;
	while(i<=50)
	{
		printf("%d",i);
		i+=5;
	
	printf("\n");
	}
}