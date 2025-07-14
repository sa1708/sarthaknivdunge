#include<stdio.h>
void main()
{
	int year;
	printf("enter any year ");
	scanf("%d",&year);
	
	if(year%4==0&&year%100||year%400==0)
	printf("this is leap year ");
	else 
	printf("this is not leap year");
}