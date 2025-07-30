#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	float marks;
	char name[20];

};
void printstudent(struct student s1);
void main()
{
	
	struct student s1;
	s1.rollno=10;
	s1.marks=75.30;
	strcpy(s1.name,"sarthak");

	
	printf("this is rollno %d \n",s1.rollno);
	printf("this is name of student %f \n",s1.marks);
	printf("this ismarks %s \n  \n \n",s1.name);
	
	 printstudent(s1);
	
	struct student s2={21,75.30,"ajankay"};
		printf("this is rollno %d \n this is name %f\n this is marks %s \n \n ",s2.rollno,s2.marks,s2.name);
	struct student *ptr=&s2;
	
	printf("this is rollno %d \n this is name %f\n this is marks %s",s2.rollno,s2.marks,s2.name);
}
void printstudent(struct student s1)
{
		printf("this is rollno %d \n this is name %f\n this is marks %s \n \n",s1.rollno,s1.marks,s1.name);
}