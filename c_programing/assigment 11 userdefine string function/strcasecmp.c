#include <stdio.h>
#include <strings.h>  

int main() {
    char str1[] = "Hello";
    char str2[] = "hello";

    if (strcasecmp(str1, str2) == 0) {
        printf("Strings are equal \n");
    } else {
        printf("Strings are different.\n");
    }

    return 0;
}
