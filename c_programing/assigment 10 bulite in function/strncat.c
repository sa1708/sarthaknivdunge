#include <stdio.h>
#include <string.h>
int main() {
    char a[20] = "Good ";
    char b[] = "Morning";
    strncat(a, b, 3);
    printf("Result: %s\n", a);  
    return 0;
}
