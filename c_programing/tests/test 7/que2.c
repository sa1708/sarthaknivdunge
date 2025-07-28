#include<stdio.h>
#include<string.h>
void ispalandrom(int arr[],int n);
void main ()
{
	int arr[]={1,2,3,4,5,6,7,8};
	int n=8;
	
	 ispalandrom(arr,n);
		
}
 void ispalandrom(int arr[],int n)
{
	for (int i=0;i<n/2;i++){
		
	if (arr[i]!=arr[n-i])
	{
	printf("this array  is  palandrom \n");	
	}
	else
	 printf("not palandrom ");	
}
}