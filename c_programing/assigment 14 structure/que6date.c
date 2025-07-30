#include<stdio.h>
#include<string.h>
struct date
{
	 int date ;
	 int  month;
	 int year ;
	 
};
void  main()
{
	struct date d1,d2;
	
	printf("Enter your date ");
	scanf("%d",&d1.date);
	
	printf("enter your month ");
	scanf("%d",&d1.month);
	
	printf("enter your year ");
	scanf("%d", &d1.year);
	
	printf("date =%d \n month=%d \n year = %d \n \n \n",d1.date,d1.month,d1.year);
	
	d2.date=12;
	d2.month =11;
	d2.year=2004;
	
	printf("date = %d \n month =%d \n year= %d \n",d2.date,d2.month,d2.year);
}