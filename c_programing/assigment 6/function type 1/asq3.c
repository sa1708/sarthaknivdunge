#include<stdio.h>
void year();
void main()
{
	year();
}
 void year()
{
	int year ;
	printf ("any ear inter ");
	scanf("%d",&year);
	
	if (year%4==0&&year%100!=0||year%400==0)
	{
		printf("this is leaf year");
		
	}
	else 
	{
		printf("this is not leap year ");
	}
}
