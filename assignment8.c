#include <stdio.h>

int main() {
    float marks[5];
    float total = 0, aggregate;
    int i, isPass = 1; // 1 means Pass, 0 means Fail
    printf("Enter marks for 5 courses (out of 100):\n");
    for (i = 0; i < 5; i++) {
        printf("Course %d: ", i + 1);
        scanf("%f", &marks[i]);
    
        total += marks[i];

        if (marks[i] < 40) {
            isPass = 0; 
        }
    }
    aggregate = total / 5;

    printf("\n--- Result Summary ---\n");
    printf("Total Marks: %.2f / 500\n", total);
    printf("Aggregate: %.2f%%\n", aggregate);
    if (isPass == 0) {
        printf("Result: FAILED (Scored below 40 in one or more courses)\n");
    } else {
        printf("Result: PASSED\n");
        printf("Grade: ");

        if (aggregate >= 75) {
            printf("Distinction\n");
        } else if (aggregate >= 60) {
            printf("First Division\n");
        } else if (aggregate >= 50) {
            printf("Second Division\n");
        } else if (aggregate >= 40) {
            printf("Third Division\n");
        }
    }

    return 0;
}
