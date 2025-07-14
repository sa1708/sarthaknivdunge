#include <stdio.h>
void main ()
{
	int tminutes;
	int hours;
	int remminutes;
	
	printf("enter total number of minute");
	
	scanf("%d",&tminutes);
	
	hours =tminutes/60;
	
	remminutes= tminutes%60;
	
	printf("%d minute is equal to %d hours and %d minutes");
}