#include<stdio.h>
struct player
{
	char name[20];
	int numberofplead;
	int runs;
	int wicket;
	
};
 void store data(struct parr[])
{	
	for(int i=0;i<10;i++)
	{
		printf("enter your name ");
		scanf("%s",parr[i].name);
	}
		
}

void main ()
{
	struct player parr[10];
	store data(parr);
	
}
