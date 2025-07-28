#include<stdio.h>
#include<string.h>
void  displayarray(int arr[],int n);
void swap(int arr[] ,int x ,int y);
void main ()
{
	int  arr[]={11,23,30,4,21,45,50};
	int x=3;
	int y=5;
	int  n=7;
	printf("this is orignal arra \n");
	displayarray(arr,n);
	
	swap( arr,x,y);
	
	printf(" \n this is changing  array\n ");
	 displayarray(arr,n);
}
void swap(int arr[] ,int x ,int y)
{	
   int temp= arr[x];
	arr[x]=arr[y];
	arr[y]=temp;
}
void displayarray(int arr[],int n)
{		
	for (int i=0;i<n;i++)
	printf("%d ",arr[i]);
}