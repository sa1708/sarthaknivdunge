#include<stdio.h>
void tool();
void main ()
{
	char ch ;
 	printf ("enter your character ");
	 scanf("%d",&ch);
	 tool(&ch);
}


void tool(char *ch) 
{
	 if(*ch>='a'&& *ch<='z')
	printf ("this character is upppercase",ch);
	 else
	printf ("this character is lowercase",ch);

}