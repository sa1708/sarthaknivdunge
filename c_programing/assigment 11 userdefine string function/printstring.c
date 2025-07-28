#include<stdio.h>
#include<string.h>
void printstring(char []);
void main()
{
	char str[100];
	scanf("%s",str);
	
	printstring(str);
}
void printstring(char str[])
{
	for(int i=0; str[i] != '\0';i++)
	{
		printf("%c",str[i]);
	}
}