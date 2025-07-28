#include <stdio.h>
#include <string.h>
int main() {
    char *ptr = strstr("good morning", "morning");
    printf("Found: %s\n", ptr);  
    return 0;
}
