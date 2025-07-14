#include <stdio.h>
#include <math.h>


int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}


int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = countDigits(num);

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return (sum == original);
}

int main() {
    int n;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
