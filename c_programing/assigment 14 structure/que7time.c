#include<stdio.h>
#include<string.h>
struct time
{
	 int hour  ;
	 int  min;
	 int sec;
	 
};
void  main()
{
	struct time t1,t2;
	
	printf("Enter your hour  ");
	scanf("%d",&t1. hour  );
	
	printf("enter your minite ");
	scanf("%d",&t1.min);
	
	printf("enter your second");
	scanf("%d", &t1.sec);
	
	printf(" hour=%d \n min=%d \n sec = %d \n \n \n",d1. hour,t1.min,t1.sec);
	
	t2.hour=12;
	t2.min =11;
	t2.sec=200;
	
	printf(" hour   = %d \n min =%d \n sec= %d \n",d2. hour,t2.min,d2.sec);
}