#include<stdio.h>
void time();
void main ()
{
	time();
}
void time()
{
	
	int hours,minutes,second;
	int totalsecond;
	printf("enter the hours ");
	scanf("%d",&hours);
	printf("enter the minutes ");
	scanf("%d",&minutes);
	printf("enter the seconds ");
	scanf("%d",&second);
	
	
	totalsecond = hours*3600+minutes*60+second;
	
	printf("total second %d \n",totalsecond);
	
}