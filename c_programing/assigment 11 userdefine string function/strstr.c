#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, welcome to C programming";
    char *sub;

    sub = strstr(str, "to");

    if (sub != NULL) {
        printf("Substring found: %s\n", sub);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
