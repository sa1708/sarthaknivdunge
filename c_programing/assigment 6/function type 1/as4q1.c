#include <stdio.h>
#include<math.h>
void num();
void main()
{
	num();
}
 void num()
{
	int n,num ,temp,rem,digits;
	printf("enter the valu of n");
	scanf("%d",&n);
	printf("atmstrong number from 1 to %d are \n",n);
	for (int i=1;i<=n;i++)
	{
		num =i;
		temp = i;
		digits=0;	
		while(temp!=0)
		{
			temp/=0;
			digits++;	
		}
		temp =i;
		int sum =0;
		while(temp!=0)
		{
			rem =temp%10;
			sum+=pow(rem,digits);
			temp/=10;	
		}
		if(sum==num)
		printf("%d",num);
	}
}