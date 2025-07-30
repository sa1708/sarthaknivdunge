#include<stdio.h>
#include<string.h>
struct employe
{
	 int id;
	 char name[20];
	 int salary;
	 
};
void  main()
{
	struct employe e1,e2;
	
	printf("Enter your id ");
	scanf("%d",&e1.id);
	
	printf("enter your name ");
	scanf("%s",&e1.name);
	
	printf("enter your salary");
	scanf("%d", &e1.salary);
	
	printf("id =%d \n name=%s \n salary = %d \n \n \n",e1.id,e1.name,e1.salary);
	
	e2.id=123;
	strcpy(e2.name,"shubham");
	e2.salary=75000;
	
	printf("id = %d \n name =%s \n salary= %d \n",e2.id,e2.name,e2.salary);
}