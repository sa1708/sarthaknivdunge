#include<stdio.h>
void primenumber (int* ,int );
void main ()
{
	int n,i;
	int arr[100];
	
	printf("enter array size");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	primenumber (arr,n);
}
void primenumber (int*arr,int n)
{

	 for ( int i=0; i < n; i++)
	 {
	 	if(arr[i]<=1)
	 	continue;
	 	
         int isPrime = 1;  
        for (int j = 2; j * j <=arr[i] ; j++) 
		{
            if (arr[i] % j == 0)
			{
                 isPrime = 0;  
                break;
            }
        }
        if (isPrime==1) 
		{
            printf(" this is the prime number %d\n", arr[i]);
        }
    }
}