#include <stdio.h>

int main() {
    int num, range, i;
    printf("Enter an integer to generate its table: ");
    scanf("%d", &num);
    printf("Enter the range : ");
    scanf("%d", &range);

    printf("\nMultiplication Table for %d:\n", num);
    printf("---------------------------\n");
    for (i = 1; i <= range; ++i) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
