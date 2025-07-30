#include<stdio.h>
#include<stdlib.h>
void sumnumber(int*,int,int);
void main ()
{
	int n;
	int sum=0;
	int *arr[100];
	
	printf("enter the number  ");
	scanf("%d",&n);
	*arr = (int *)malloc(n * sizeof(int));
	sumnumber(arr,n,sum);
}
void sumnumber(int* arr,int n,int sum)
{
	for(int i=0;i<n;i++)
	{	
	scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("this is the   sum of number %d",sum);
}
