#include <stdio.h>
void age();
void main()
{
	age();
}

void age()
{
	int age;
	printf("enter your age ");
 	scanf("%d",&age);
 	
 	if(age>18)
 	{
 		printf("the person is eligbal");
 		
	 }
	 else
	 {
	 	printf("the person is not eligbal");
	 }
}
