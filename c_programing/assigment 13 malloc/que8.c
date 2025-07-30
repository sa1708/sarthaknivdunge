#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, i;

   
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int *arr1 = (int *)malloc(n1 * sizeof(int));
    int *arr2 = (int *)malloc(n2 * sizeof(int));
    int *merged = (int *)malloc((n1 + n2) * sizeof(int));

 
    if (arr1 == NULL || arr2 == NULL || merged == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

  
    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    
    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
   
    
    free(arr1);
    free(arr2);
    free(merged);

    return 0;
}
