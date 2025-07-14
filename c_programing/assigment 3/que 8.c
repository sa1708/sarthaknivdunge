#include<stdio.h>
void main()
 {
    int n = 145;
    int original=n ;
    int sum=0;
    while(n>0)
    {
    	int digit=n%10;
    	sum += factorial(digit);
    	n/=10;
	}
    if (sum == original)
	
       printf("%d is a strong number\n", original);

	else 
        printf("%d is not a strong number\n",original);
            
}