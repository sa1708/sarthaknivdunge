#include <stdio.h>
int palandrom();
void main ()
{
	int res;
	res=palandrom();
	if(res==2)
	printf("this is palandrom number");
	else 
	printf("this is not palandrom number");
	
}
int palandrom()
{
	
	int num ;
	printf("enter three digit number ");
	scanf("%d",&num);
	int r1,r2,r3,q1,rev;
	r1=num%10;
	q1=num/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+r3;
	
	return(num/2==0);
	
}
