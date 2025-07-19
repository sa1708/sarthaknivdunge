#include<stdio.h>
int years();
int main()
{
	int year ;
	printf ("any ear inter ");
	scanf("%d",&year);
	int res = years(year);
}
int years(int year)
{	
	if (year%4==0&&year%100!=0||year%400==0)
	{
		printf("this is leaf year");
		
	}
	else 
	{
		printf("this is not leap year ");
	}
	
}