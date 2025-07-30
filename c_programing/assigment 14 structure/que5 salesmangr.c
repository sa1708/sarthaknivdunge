#include<stdio.h>
#include<string.h>
struct salasemanager
{
	 int id;
	 char name[20];
	 int salary;
	 int target;
};
void  main()
{
	struct salasemanager s1,s2;
	
	printf("Enter your id ");
	scanf("%d",&s1.id);
	
	printf("enter your name ");
	scanf("%s",&s1.name);
	
	printf("enter your salary");
	scanf("%d", &s1.salary);
	
	printf("enter your target ");
	scanf("%d",&s1.target);
	
	printf("id =%d \n name=%s \n salary = %d \n target=%d \n \n \n",s1.id,s1.name,s1.salary,s1.target);
	
	s2.id=123;
	strcpy(s2.name,"shubham");
	s2.salary=75000;
	
	printf("id = %d \n name =%s \n salary= %d target=%d \n",s2.id,s2.name,s2.salary,s2.target);
}