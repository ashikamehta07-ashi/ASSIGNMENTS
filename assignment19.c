#include <stdio.h>
#include <string.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    char designation[30];
    char gender; // 'M' or 'F'
    struct Date doj;
    float salary;
};

void displayHighSalary(struct Employee emp[], int n) {
    printf("\n--- Employees with Salary > 10,000 ---\n");
    for (int i = 0; i < n; i++) {
        if (emp[i].salary > 10000) {
            printf("Name: %s | Salary: %.2f\n", emp[i].name, emp[i].salary);
        }
    }
}
void displayAsstManagers(struct Employee emp[], int n) {
    printf("\n--- Assistant Managers ---\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(emp[i].designation, "Asst Manager") == 0) {
            printf("Name: %s\n", emp[i].name);
        }
    }
}

void countGender(struct Employee emp[], int n) {
    int male = 0, female = 0;
    for (int i = 0; i < n; i++) {
        if (emp[i].gender == 'M' || emp[i].gender == 'm') male++;
        else if (emp[i].gender == 'F' || emp[i].gender == 'f') female++;
    }
    printf("\nTotal Male Employees: %d", male);
    printf("\nTotal Female Employees: %d\n", female);
}

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (int i = 0; i < n; i++) {
        printf("\nDetails for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name); // Reads string with spaces
        printf("Designation: ");
        scanf(" %[^\n]", emp[i].designation);
        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);
        printf("Date of Joining (DD MM YYYY): ");
        scanf("%d %d %d", &emp[i].doj.day, &emp[i].doj.month, &emp[i].doj.year);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n================ REPORTS ================");
    printf("\na) Total number of employees: %d", n);

    countGender(emp,
