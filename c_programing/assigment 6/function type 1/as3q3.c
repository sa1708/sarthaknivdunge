#include <stdio.h>
void sum();
void main()
{
	sum();
}
void sum()
{
	int start=1,end = 5;
	int sum;
	for(int i = start; i<=end; i++)
	{
		sum+=i;
	
	}
	printf("sum from %d to %d=%d\n",start,end,sum);
}