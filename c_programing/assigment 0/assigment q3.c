#include<stdio.h>
void main ()
{
	float celsius,fahrenheit;
	printf("enter any celsius");
	scanf("%f" ,&celsius);
	
	fahrenheit=(celsius*9.0/5.0)+ 32.0;
	printf("%2f celsius % 2%f fahrenheit",celsius,fahrenheit);
}