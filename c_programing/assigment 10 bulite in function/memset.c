#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    memset(str, 'A', 50);
    str[50] = '\0';
    printf("Result: %s\n", str);  
    return 0;
}
