#include<stdio.h>
#include <string.h>
void salting(char password[]);
void main ()
{
	char password[100];
	scanf("%s",password);
	salting(password);
}
void salting(char password[])
{
	char salt []="123";
	char newpass[200];
	
	strcpy(newpass,password);
	strcat(newpass,salt);
	puts(newpass);
}