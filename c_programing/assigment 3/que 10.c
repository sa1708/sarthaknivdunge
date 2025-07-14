#include <stdio.h>
void main ()
{
 	int n=12345;
 	int original=n;
	 int ld=n%10;
	 while(n>=10)
	 n/=10;
	 {
	 	int fd =n;
	 	int sum=fd + ld;
	 	
	 	printf("sum of first and last digit of %d is%d\n",original,sum);
	
	 }	

}