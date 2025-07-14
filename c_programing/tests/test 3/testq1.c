#include<stdio.h>
void main ()
{
	int st ,end;
	printf("Enter the start number ");
	scanf("%d",&st);
	printf("Enter the enter number ");
	scanf("%d",&end);
	
	while(st<=end)
	if(st%2==0)
	printf("this is even number %d",st);
	else 
	printf("this is odd number %d",st);
	st++;
}