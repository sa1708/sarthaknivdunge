#include <stdio.h>
 int evenodd();
void main()
{
	int num ;
	printf("enter any number ");
	scanf("%d",&num);
	int res=evenodd(num);
	if(res==1)
	printf("this number is even ");
	else
	printf("this number is odd");	
}
int evenodd(int no)
{	
	if(no%2==0)
		return 1;
	else 
		return 0;
}