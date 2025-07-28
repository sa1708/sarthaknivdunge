#include <stdio.h>
#include <string.h>
int main() {
    char *ptr = strchr("hello", 'l');
    printf("Found: %s\n", ptr);  
    return 0;
}
