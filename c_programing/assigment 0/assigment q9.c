#include <stdio.h>

void main() {
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    
    area = (base * height);
    printf("The area of the triangle is: %.2f\n", area);

    
}
