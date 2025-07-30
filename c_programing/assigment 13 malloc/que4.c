#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n;
	int arr[100];
		printf("enter your number ");
		scanf("%d",&n);
	for( i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}

*arr = (int *)malloc(n * sizeof(int));
	for( i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		printf("this is even number ",arr[i]);

		if  (arr[i]%2==1)
		printf("this is odd number ",arr[i]);
	}
}