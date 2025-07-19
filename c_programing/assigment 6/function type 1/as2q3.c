#include <stdio.h>
void trangle();
void main()
 {
 	trangle();

}
void trangle()
{

    int side1, side2, side3;

    
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    
    if ((side1 + side2 > side3) &&
        (side2 + side3 > side1) &&
        (side1 + side3 > side2)) {
        
        
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }

    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

}
