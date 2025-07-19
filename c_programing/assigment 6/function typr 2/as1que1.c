#include <stdio.h>
int evenodd();
void main()
{
	int res;
	res=evenodd();
	if(res==1)	
	printf("this is even number ");
	else
	printf("this number is odd");
}
int evenodd()
{
	int num;
	printf("print any number ");
	scanf ("%d",&num);
	
 return(num%2==0);

}