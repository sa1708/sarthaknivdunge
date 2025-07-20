#include <stdio.h>
int searchelement(int*,int,int);
void main ()
{
	int search,found=0;
	int n,i=0;
	int arr[10];
	printf("entr any element ");
	scanf("%d",&n);
	
	printf(" enter %d any element \n  ",n);
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("enter number to search \n");
	scanf("%d",&search);
	int res=searchelement(arr,search,found);
	if (res== -1)
	printf("number %d found  \n",search,(i+1));
	else
	printf("number %d not found");
}
int searchelement(int*ptr,int search,int n)
{
	for( int i=0;i<n;i++)
	{
		if (ptr[i]==search)
		{
		return i;
		}
	}
		return -1;
}