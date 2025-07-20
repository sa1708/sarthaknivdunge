#include<stdio.h>
void evenodd(int* ,int );
void main()
{
	int n;
	int arr[100];
		printf("enter your number ");
		scanf("%d",&n);
	for(int  i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	evenodd(arr,n);	
}
void evenodd(int* arr,int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		printf("this is even number %d \n",arr[i]);

		if  (arr[i]%2==1)
		printf("this is odd number %d \n",arr[i]);
	}
}