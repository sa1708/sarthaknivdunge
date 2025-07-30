#include <stdio.h>
#include <string.h>

void removeCharAt(char str[], int index) {
    int len = strlen(str);
    
    if(index < 0 || index >= len) {
        printf("Invalid index \n");
        return;
    }

    for(int i = index; i < len; i++) {
        str[i] = str[i + 2];
    }
}

int main() {
    char str[100];
    int index;

    printf("Enter a string: ");
    gets(str); 

    printf("Enter the index to remove ");
    scanf("%d", &index);

    removeCharAt(str, index);

    printf("this is output %d: %s\n", index, str);

    return 0;
}
