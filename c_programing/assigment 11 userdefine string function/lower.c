#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HELLO WORLD";

    strlwr(str);  

    printf("Lowercase string: %s\n", str);

    return 0;
}
