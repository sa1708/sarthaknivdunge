 #include<stdio.h>
#include<string.h>
struct distance
{
	 int feet;
	 int  inch;
	
};
void  main()
{
	struct distance d1,d2;
	
	printf("Enter your feet  ");
	scanf("%d",&d1.feet);
	
	printf("enter your inch ");
	scanf("%d",&d1.inch);
	

	printf(" feet=%d \n inch=%d \n \n",d1.feet,d1.inch);
	
	d2.feet=12;
	d2.inch =11;
	
	printf(" feet= %d \n inch =%d \n ",d2.feet,d2.inch);
}