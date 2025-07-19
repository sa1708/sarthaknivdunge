#include <stdio.h>
void vowel();
void main ()
{
	char ch='a' ;
   printf("enter any word ");
   scanf("%c",&ch);
   vowel(ch);
}
void vowel(ch)
{	
    if (ch=='a'||ch=='e'||ch=='i'|| ch=='o'||ch=='u') 
    {
    	printf("this  is vowel");
    	
	}
	else
	{
		printf("this is consonant");
	}
	
}