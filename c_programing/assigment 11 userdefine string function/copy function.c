#include <stdio.h>

void myStrcat(char str1[], char str2[]) {
    int i = 0, j = 0;

    while(str1[i] != '\0') {
        i++;
    }

    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int main() {
    char str1[50] = "Hello ";
    char str2[] = "World";
    myStrcat(str1, str2);
    printf("Concatenated: %s", str1);
    return 0;
}
