#include<stdio.h>
#include<string.h>
struct product
{
	 int id ;
	 char name[20];
	 int price;
};
void  main()
{
	struct product p1,p2;
	
	printf("Enter your id   ");
	scanf("%d",&p1.id);
	
	printf("enter your name");
	scanf("%s",&p1.name);
	
	printf("enter your price");
	scanf("%d", &p1.price);
	
	printf(" id=%d \n name=%s \n price = %d \n \n \n",p1.id,p1.name,p1.price);
	
	p2.id=12;
	strcpy(p2.name,"sarhak");
	p2.price=200;
	
	printf(" id = %d \n named =%s \n price= %d \n",p2.id,p2.name,p2.price);
}