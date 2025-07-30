#include<stdio.h>
#include<stdlib.h>
void  alaternumber( int*, int );
void main ()
{
	int i,n;
	int  *arr[100];
	
	printf("enter your number ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
		*arr = (int *)malloc(n * sizeof(int));
	printf("this is your answer \n");
	for(i=0;i<n;i+=2)
		printf(" %d \n",arr[i]);
}