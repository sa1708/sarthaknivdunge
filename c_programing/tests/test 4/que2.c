#include<stdio.h>
void main ()
 {
 	int base ;
 	int expon;
 	int pow=1;
 	printf("enter base number ");
 	scanf("%d",&base);
 	
 	printf("enter expon number ");
 	scanf("%d",&expon);
 	
 	for(int i=1;i<expon;i++){
	 pow*=base;
	}
	 printf("this is the output %d ^ %d =%d",base,expon),pow; 
 }