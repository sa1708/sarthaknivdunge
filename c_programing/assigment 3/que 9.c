#include<stdio.h>
void main()
{
	int n=121;
	int original = n;
	int rev= 0;
	 
	  while (n>0)
	  {
	  	int digit=n%10;
	  	rev =rev*10+digit;
	  	n/=10;
	  	
	  }
	  if(original == rev)
	  {
	  printf("%d is a palandrom number \n",original);
		}
	  else 
	  {
	  	printf("%d is non palandrom number \n",original);
	  }
}