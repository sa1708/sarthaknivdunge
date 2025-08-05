#include<stdio.h>
void main()
{
	int age[2];
	float ticketamount,discountamount;
	float totalprice=0;
	
	printf("enter ticket amount ");
	scanf("%f",&ticketamount);
	
	for (int i=0;i<2;i++)
	{
		printf(" entre your age");
		scanf("%d",&age);
		
		if(age[i]<12)
		{
		totalprice=ticketamount*0.70;
		}else if(age[i] > 59){
		
		totalprice=ticketamount*0.50;
		}else{
		 totalprice+=discountamount;
		}
	}
	printf("this is your total ticket price %f",totalprice);
}