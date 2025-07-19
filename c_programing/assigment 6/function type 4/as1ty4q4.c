#include <stdio.h>
char match(char);
void  main ()
{
	char ch ;
	printf("enter any character ");
	scanf("%c",&ch);
    char res = match(ch);
    if (res&&ch)
    printf("this is vowel");
    else 
    printf("this is constrom");
}
char match(char ch)
{	
    if (ch=='a'||ch=='e'||ch=='i'|| ch=='o'||ch=='u') 
    {
    return 1;	
	}
	else
	{
	return 0;
	}	
}