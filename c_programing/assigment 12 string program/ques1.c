#include <stdio.h>
#include <string.h>
void searchCharacter(char str[], char ch) {
    int found = 0;
    printf("Character '%c' found at positions: ", ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Not found.");
    }
    printf("\n");
}

int main() {
    char str[100], ch;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

   
    printf("Enter a character to search ");
    scanf(" %c", &ch);  

    
    searchCharacter(str, ch);

    return 0;
}
