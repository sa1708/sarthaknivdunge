#include<stdio.h>
void  alaternumber( int*, int );
void main ()
{
	int n;
	int  arr[100];
	
	printf("enter your number ");
	scanf("%d",&n);
	 alaternumber(arr,n);
}
void  alaternumber(int* arr, int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	printf("this is your answer \n");
	for(i=0;i<n;i+=2)
		printf(" %d \n",arr[i]);
}