#include <stdio.h>
void eligibal();
void main()
{
	int age;
	printf("enter your age ");
 	scanf("%d",&age);
 	eligibal(&age);
 }
 void eligibal(int* age)
 {
 	if(*age>18)
 	{
 		printf("the person is eligbal");
 		
	 }
	 else
	 {
	 	printf("the person is not eligbal");
	 }
}
