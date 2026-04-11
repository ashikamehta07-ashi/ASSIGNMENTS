#include <stdio.h>

int main() {
    int num, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("-");
        num = -num;
    }
    if (num == 0) {
        printf("0");
    }

    printf("Reversed digits: ");

    while (num > 0) {
        remainder = num % 10;      // Get the last digit
        printf("%d", remainder);    // Print it immediately
        num = num / 10;             // Remove the last digit
    }

    printf("\n");

    return 0;
}
