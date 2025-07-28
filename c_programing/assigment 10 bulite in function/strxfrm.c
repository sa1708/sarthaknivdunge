#include <stdio.h>
#include <string.h>
int main() {
    char src[] = "hello";
    char dest[20];
    size_t n = strxfrm(dest, src, 20);
    printf("Length: %lu\n", n);
    return 0;
}
