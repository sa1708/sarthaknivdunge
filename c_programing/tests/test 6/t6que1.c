#include<stdio.h>
void main() {
	int i,n,j;
	int arr[100];
	int brr[100];
	int result;

	printf("enter your number");
	scanf("%d",&n);

	printf("enter your number in array of arr \n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	printf("entre your number in array of brr\n");
	for (j=0; j<n; j++)
		scanf("%d",&brr[j]);

	for(i=0; i<n; i++) {
		for (j=0; j<n; j++)
		 {
			if(arr[i]==brr[j]) 
			{
				printf(" this is final output \n %d ",arr[i]);
				break;

			}
		}
	}

}