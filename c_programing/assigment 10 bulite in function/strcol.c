#include <stdio.h>
#include <string.h>
int main() {
    char *a = "abc";
    char *b = "abc";
    printf("Coll: %d\n", strcoll(a, b));  
    return 0;
}
