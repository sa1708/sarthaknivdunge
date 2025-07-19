#include<stdio.h>
void years();
void main()
{
	int year ;
	printf (" enter any year  inter ");
	scanf("%d",&year);
	years(year);
}
void years(int year)
{	
	if (year%4==0&&year%100!=0||year%400==0)
	printf("this is leaf year");
	else 
	printf("this is not leap year ");
}