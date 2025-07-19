#include <stdio.h>
int palandrom();
void main ()
{
	int num;
	printf("enter any number here ");
	scanf("%d",&num);
	int res=palandrom(num);
	if(res==1)
	printf("this is palandrom number");
	else 
	printf("this is not palandrom number");	
}
int palandrom(int num )
{
	int r1,r2,r3,q1,rev;
	r1=num%10;
	q1=num/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+r3;
	
	if(rev==num)
	return 1;
	else
	return 0;	
}
