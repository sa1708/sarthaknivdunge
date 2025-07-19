#include <stdio.h>
void main ()
{
	int search,found=0;
	int n,i;
	int arr[10];
	printf("entr any element ");
	scanf("%d",&n);
	
	printf(" enter %d any element \n  ",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("enter number to search \n");
	scanf("%d",&search);
	
	for(i=0;i<n;i++)
	{
		if (arr[i]==search)
		{
			found=1;
			break;
		}
		
	}
	if (found)
	printf("number %d found at position %d \n",search, i+1);
	else
	printf("number %d not found at position %d",search);
}