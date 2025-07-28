#include <stdio.h>
#include <string.h>
int main() {
    char *ptr = strpbrk("abcdef", "xez");
    printf("Found: %s\n", ptr);  
    return 0;
}
