#include<stdio.h>
#include<string.h>
struct HR
{
	 int id;
	 char name[20];
	 int salary;
	 float commision;
	 
};
void  main()
{
	struct HR h1,h2;
	
	printf("Enter your id ");
	scanf("%d",&h1.id);
	
	printf("enter your name ");
	scanf("%s",&h1.name);
	
	printf("enter your salary");
	scanf("%d", &h1.salary);
	
	printf("enter your commision");
	scanf("%f", &h1.commision);
	printf("id =%d \n name=%s \n salary = %d \n \n \n",h1.id,h1.name,h1.salary,h1.commision);
	
	h2.id=123;
	strcpy(h2.name,"shubham");
	h2.salary=75000;
	h2.commision=21.1;
	printf("id = %d \n name =%s \n salary= %d \n",h2.id,h2.name,h2.salary,h2.commision);
}