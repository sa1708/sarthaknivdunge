#include <stdio.h>
int ages ();
void main()
{
	int age;
	printf("enter your age ");
 	scanf("%d",&age);
 	int res=ages(age); 
 	if (res>=18)
 	printf("this is eable ");
 	else 
 	printf("this is not ebeal ");
 	
 }
 int ages(int age)
 {
 	if(age>18)
 	{
 	return 0;	
	}
	 else
	{
	return 1;
	}
}
