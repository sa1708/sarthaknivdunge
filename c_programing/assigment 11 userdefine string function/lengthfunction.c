#include<stdio.h>
#include<string.h>
int printlength(char[]);
int countvowel(char[]);
void main () {
	char str[100];
	printf("enter your string");
	scanf("%s",str);

	printf("this is your output %d \n",printlength(str));
	printf("this vowel count %d",countvowel(str));
}

int printlength(char arr[]) {
	int count=0;
	for (int i=0; arr[i]!='\0'; i++) {
		count++;
	}
	return count;
}

int countvowel(char str[]) {
	int i;
	int count=0;
	for(int i=0; str[i]!='\0'; i++)
		if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
			count++;
		}
	return count;
}
