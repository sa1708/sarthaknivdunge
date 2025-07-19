#include <stdio.h>
void evenodd();
void main()
{
		int num;
	printf("print any inteiger ");
	scanf ("%d",&num);
		evenodd(&num);

}
 void evenodd(int*num)
{
	if(*num%2==0)
	printf ( "number is even");
	else 	
	printf("number is odd");
}
  