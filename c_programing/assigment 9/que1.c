#include<stdio.h>
void maxmin(int*);
void main () 
{
	int max;
	int min ;
	int arr[5];
	max=arr[0];
	min=arr[0];
	printf("enter any number \n");
	for(int i=0;i<5;i++) 
	{
		scanf("%d",&arr[i]);

	}
	maxmin(arr);
}
void maxmin(int*arr)
{
	
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<5;i++) 
	{
		if(arr[i]>max) 
		max=arr[i];
		if(arr[i]<min) 
		min=arr[i];		
	}
		printf("this is maxmum number %d ",max);
		printf(" \n this is the minimum number %d ",min);
}
