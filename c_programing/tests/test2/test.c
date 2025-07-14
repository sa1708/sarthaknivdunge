#include <stdio.h>
void main()
{
	int unit ;
	float bill=0.0;
	
	printf("enter  the unit custermer ");
	scanf ("%d",&unit);
	if (unit<=50)
	{
		bill=unit*3.0;
	}	
	else if(unit<=150)
	{
	bill=50*3.0	+(unit - 50)*4.0;	
	}
	else
	{
			bill=	50*3.0+100*-40.0	+ (unit - 150)*50.0;
			
	}
	printf("% electricity bill :%2f\n",bill);
}