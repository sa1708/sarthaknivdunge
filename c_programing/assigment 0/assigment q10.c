#include <stdio.h>

void main()
 {
    float subject1, subject2, subject3, subject4, subject5;
    float total_marks;
    float percentage;

    
    printf("Enter marks for subject 1: ");
    scanf("%f", &subject1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &subject2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &subject3);
    printf("Enter marks for subject 4: ");
    scanf("%f", &subject4);
    printf("Enter marks for subject 5: ");
    scanf("%f", &subject5);

    
    total_marks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (total_marks / 500.0) * 100.0;
    printf("\nTotal Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

}
