#include<stdio.h>
void  main()
{
	float num1, num2, num3,num4,num5;
	float average;
	
	printf("enter first number \n");
	scanf("%f",&num1);
	printf("enter second number \n");
	scanf("%f",&num2);
	printf("enter third number \n");
	scanf("%f",&num3);
	printf("enter four number \n");
	scanf("%f",&num4);
	printf("enter five number \n");
	scanf("%f",&num5);
	
	average = (num1+num2+num3+num4+num5)/5.0;
	
	printf("The avarge of the five number is %2f\n",average); 
	
	
}