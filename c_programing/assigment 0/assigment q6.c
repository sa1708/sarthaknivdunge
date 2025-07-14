#include <stdio.h>
void main ()
{
	int number;
	printf ("enter any number ");
	scanf("%d",&number);
	
	int square = number * number ;
	int cube = number * number * number ;
	
	
	printf("square of %d\n ",number ,square);
	printf("cube of %d\n ",number ,cube );
	
	
}