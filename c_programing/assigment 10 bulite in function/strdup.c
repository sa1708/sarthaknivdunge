#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char *original = "hello";
    char *copy = strdup(original);
    printf("Copy: %s\n", copy);
    free(copy);
    return 0;
}
