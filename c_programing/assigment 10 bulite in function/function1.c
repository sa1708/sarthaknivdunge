#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];	
	printf("enter any string ");
	fgets(str, sizeof(str), stdin);  

	if (str[strlen(str)-1] == '\n' ){
	
	 ( str[strlen(str)-1] =='\0');
	}
		int length = strlen(str);
		
	printf("this is string of the  %d  length", length ) ;
	
}