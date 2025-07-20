
#include<stdio.h>
void sumnumber (int*,int*,int*,int );

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
	sumnumber (arr,brr,crr , n);

}
void sumnumber (int* arr,int* brr,int* crr ,int n)
{	
	for ( int i=0;i<n;i++)
	{
		crr[i]=arr[i] + brr[i];
		
	}
		printf("this is  sum of crr array \n ");
	for ( int i=0;i<n;i++)
		printf("%d \n",crr[i]);
}