#include<stdio.h>
#include<string.h>
void main ()
{
	char str[100];
	int i=0;
	printf("Enter a your string ");
	for (i=0;i<str;i++)
	scanf("%s",str);
	
	
 	for(i=0;str[i]!='\0';i++)
	 if (str[i] ==' '){
	str[i]="#";
	}
	 
	 printf("%s",str[i]);	
}
