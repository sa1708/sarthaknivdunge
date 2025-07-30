#include<stdio.h>
#include<stdlib.h>
void main () 
{
	int max;
	int min,n ;
	int *arr[5];
	max=arr[0];
	min=arr[0];

	 printf("Enter the number of elements: ");
    scanf("%d", &n);
	 *arr= (int *)malloc(n* sizeof(int));
	 	printf("enter any number \n");
	for(int i=0;i<5;i++) 
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(int i=0;i<5;i++) 
	{
		if(arr[i]>max) 
		max=arr[i];
		if(arr[i]<min) 
		min=arr[i];		
	}
		printf("this is maxmum number %d ",max);
		printf(" \n this is the minimum number %d ",min);
		
		free(arr);
}
