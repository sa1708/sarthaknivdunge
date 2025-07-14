#include<stdio.h>
void main ()
{
	int no=153;
	int rem,sum=0,temp;
	while(no>0)
	{
		rem=no%10;
		sum=sum+rem+rem+rem;
		no=no/10;
	}
	
	if (sum==temp)
	{
		printf("this is aromstrong number ");
		
	}
	else 
	{
		printf("this is non aromstrong number ");
	}

}