#include <stdio.h>

char* strupper(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
        i++;
    }
    return str;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str); 
    
    strupper(str); 
    
    printf("Uppercase string: %s\n", str);
    
    return 0;
}
