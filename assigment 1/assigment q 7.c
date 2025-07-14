#include<stdio.h>
void main ()
{
	float bs =7000;
	float da ,ta ,ts,hra,total;
	if(bs<=5000)
	{
		da=bs*0.10;
		ta=bs*0.10;
		hra=bs*0.20;
	}
	else
	{
	da=bs*0.15;
	ta=bs*0.25;
	hra=bs*0.10;	
	}
	printf("da=%2f\n",da);
	printf("ta=%2f\n",ta);
	printf("hra=%2f\n",hra);
	printf("total salary=%2f\n",total);
}