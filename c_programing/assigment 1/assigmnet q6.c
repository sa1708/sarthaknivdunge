#include<stdio.h>
void main ()
{
	char ch ;
 	printf ("enter your character ");
	 scanf("%d",&ch);
	 
	 if(ch>='a'&& ch<='z')
	 {
	 	printf ("this character is upppercase",ch);
	 	
	 }
	 else
	 {
	 	printf ("this character is lowercase",ch);
	
	}
}