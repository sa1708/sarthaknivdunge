#include<stdio.h>
void main ()
{
	int i,k=0;
	int n,f;
	int arr[100];
	int brr[100];
	
	
	printf("enter number of size  first array");
	scanf("%d",&n);
	
	printf("enter number of first element array\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	
	printf("enter number of  size  second array");
	scanf("%d",&f);
	
	printf("enter number of  first element array\n");
	for(i=0;i<f;i++)
	scanf("%d",&brr[i]);
	
	 int merged[n+f];
	for(i=0;i<n;i++)
	merged[k++]=arr[i];
	
	for(i=0;i<n;i++)
	merged[k++]=brr[i];
	
	printf("marged array is \n");
	for(i=0;i<n+f;i++)
	{
		printf("%d \n", merged[i]);
	}
}