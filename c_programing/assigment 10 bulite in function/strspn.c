#include <stdio.h>
#include <string.h>
int main() {
    size_t len = strspn("abcde123","len");
    printf("Span Length: %lu\n", len); 
    return 0;
}
