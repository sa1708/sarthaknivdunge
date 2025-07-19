#include<stdio.h>
void number();
void main()
{
	
	number();
	
}

	
void number()
{
	int num;
	printf("print any inteiger ");
	scanf ("%d",&num);
	
	if(num%2==0)
	{
		printf ( "number is even");
	}
	else 
	{
		printf("number is odd");
	}
}
