#include<stdio.h>
 void withdrol(int,int);
 void diposit(int,int);
void main()
{
	int amount,choice ,balance;
	
	
	printf("enter your balance");
	scanf("%d",&balance);
	
	printf("enter your amount");
	scanf("%d",&amount);
	
	printf("enter your choice");
	scanf("%d",&choice);
	
	diposit(amount,balance);
	withdrol(amount,balance);
	
	if (choice==1)
	{
		int deposite(amount);
	}
	else if(choice==2) 
	{
		int withdrow(amount);
	}
	else
	{
		printf("invalide choice \n");
	}
}
 void diposit(int amount,int balance)
 {
 	balance+=amount;
 	printf("your balance %d",balance);
 	
 }
 void withdrol(int amount,int balance)
{
	if(balance<3000)
	{
		printf("cant balance is lesthe 3000 \n");
	}
	else
	{
		balance-=amount;
		printf("updated balamnce %d",balance);
	}
}