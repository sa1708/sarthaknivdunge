
#include<stdio.h>
void main ()
{
	int n,i;
	int arr[100];
	int brr[100];
	int crr[100];
	
	printf("entre any number ");
	scanf("%d",&n);
	
	printf("this is a arr of array \n");
	for (i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("this is a brr of array \n");
	for ( i=0;i<n;i++)
	scanf("%d",&brr[i]);
	
	for ( i=0;i<n;i++)
	{
		crr[i]=arr[i] + brr[i];
		
	}
		printf("this is  sum of crr array \n ");
	for ( i=0;i<n;i++)
		printf("%d \n",crr[i]);
}