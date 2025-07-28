#include <stdio.h>
#include <string.h>

int main() {
    const char *text = "Hello, welcome to ChatGPT!";
    const char *word = "welcome";

    
    char *result=strnstr(text, word, 20);

    if (result != NULL)
        printf("Found: %s\n", result);
    else
        printf("Not found within first 20 characters.\n");

    return 0;
}
