#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
    int i, n, upper, lower;

    srand(time(0));

    printf("How many random numbers do you want? ");
    scanf("%d", &n);

    printf("Enter the range (Lower limit and Upper limit): ");
    scanf("%d %d", &lower, &upper);

    printf("\nGenerated Random Numbers:\n");
    for (i = 0; i < n; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }

    printf("\n");
    return 0;
}
