#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int n,i;
	int *arr[100];
	int isPrime;
	printf("enter array size");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&*arr[i]);
	}
*arr = (int *)malloc(n * sizeof(int));

	 for ( int i=0; i < n; i++)
	 {
	 	if(*arr[i]<=1)
	 	continue;
	 	
         int isPrime = 1;  
        for (int j = 2; j * j <=*arr[i] ; j++) 
		{
            if (*arr[i] % j == 0)
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