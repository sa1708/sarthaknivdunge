#include<stdio.h>
void main ()
{
	int start=10;
	int end=15;
	
	
	for (int num = start;num<=end;num++)
	{
		printf("factor %d",num);
		for(int i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				printf("%d",i);
			}
		}
		printf("\n");
	}
	
}