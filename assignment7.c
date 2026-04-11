#include <stdio.h>


struct Student {
    int rollNumber;
    char name[50];
    float marks;
};
int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (i = 0; i < n; i++) {
        printf("\n--- Entering details for Student %d ---\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNumber);
        
        printf("Name: ");
        // Using %s for simplicity, though it stops at spaces
        scanf("%s", s[i].name); 
        
        printf("Marks (out of 100): ");
        scanf("%f", &s[i].marks);
    }
    printf("\n\n================ STUDENT RESULTS ================\n");
    printf("%-10s %-20s %-10s %-10s\n", "Roll No", "Name", "Marks", "Result");
    printf("-------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f %-10s\n", 
               s[i].rollNumber, 
               s[i].name, 
               s[i].marks, 
               (s[i].marks >= 40.0) ? "PASS" : "FAIL");
    }
    printf("=================================================\n");

    return 0;
}
