#include<stdio.h>
void main ()
{
	int n;
	int sum=0;
	int arr[100];
	
	printf("enter the number  ");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{	
	scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("this is the   sum of number %d",sum);
}
