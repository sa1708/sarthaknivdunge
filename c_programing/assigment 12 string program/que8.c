#include <stdio.h>

int countWords(const char *str) {
    int count = 0, i = 0;

    while (str[i] != '\0') {
      
        if ((str[i] != ' ') && (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
        i++;
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int wordCount = countWords(str);
    printf("Total number of words: %d\n", wordCount);

    return 0;
}
