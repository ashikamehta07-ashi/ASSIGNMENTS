#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[100];
    int choice;

    while (1) {
        printf("\n--- String Operations Menu ---");
        printf("\n1. Length (strlen)");
        printf("\n2. Copy (strcpy)");
        printf("\n3. Concatenate (strcat)");
        printf("\n4. Compare (strcmp)");
        printf("\n5. Reverse (strrev - non-standard)");
        printf("\n6. Lowercase (strlwr)");
        printf("\n7. Uppercase (strupr)");
        printf("\n8. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 8) break;

        printf("Enter string: ");
        scanf(" %[^\n]", s1); // Read string with spaces

        switch (choice) {
            case 1:
                printf("Length of string: %lu\n", strlen(s1));
                break;

            case 2:
                strcpy(temp, s1);
                printf("String copied to 'temp'. Content of temp: %s\n", temp);
                break;

            case 3:
                printf("Enter string to append: ");
                scanf(" %[^\n]", s2);
                strcat(s1, s2);
                printf("Concatenated string: %s\n", s1);
                break;

            case 4:
                printf("Enter second string for comparison: ");
                scanf(" %[^\n]", s2);
                if (strcmp(s1, s2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                printf("Reversed string: %s\n", strrev(s1));
                break;

            case 6:
                printf("Lowercase: %s\n", strlwr(s1));
                break;

            case 7:
                printf("Uppercase: %s\n", strupr(s1));
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
