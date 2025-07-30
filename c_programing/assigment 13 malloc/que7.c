#include <stdio.h>
#include <stdlib.h>

void main() {
    int i, n = 5;

   
    int *arr = (int *)malloc(n * sizeof(int));
    int *brr = (int *)malloc(n * sizeof(int));
    int *crr = (int *)malloc(n * sizeof(int));

    
    if (arr == NULL || brr == NULL || crr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int temp1[5] = {1, 2, 3, 4, 5};
    int temp2[5] = {10, 20, 30, 40, 50};

    for (i = 0; i < n; i++) {
        arr[i] = temp1[i];
        brr[i] = temp2[i];
    }

    for (i = 0; i < n; i++) {
        crr[i] = arr[i] + brr[i];
    }

  
    printf("Sum of arr and brr stored in crr:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", crr[i]);
    }

    
    free(arr);
    free(brr);
    free(crr);


}
