#include<stdio.h>
void main ()
{
	int n=7;
	int isprime = 1;
	
	if (n<=1)
    {
    	isprime = 0;
    	
		}
		else
		{
			for (int i;i<=n/2;i++)
			{
				if(n%i==0)
				{
					isprime = 0;
						break;
						
				}
			}
		}
			
			if(isprime )
			{
				printf("%d is a prime number \n",n);
				
			}
			else 
			{
				printf("%d is not prime number \n",n);
			}
}

