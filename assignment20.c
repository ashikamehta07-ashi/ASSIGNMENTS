//with pointer
#include <stdio.h>
void swap(int *a, int *b) {
    int temp;
    
    temp = *a;    // Store the value pointed to by 'a' in temp
    *a = *b;      // Assign the value pointed to by 'b' to the location 'a'
    *b = temp;    // Assign the value in temp to the location 'b'
}
int main() {
    int num1 = 10, num2 = 20;

    printf("Before Swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After Swapping:  num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

//wthout pointer
#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp;

    printf("\nInside Function (Before Swap): a = %d, b = %d", a, b);
    temp = a;
    a = b;
    b = temp;

    printf("\nInside Function (After Swap):  a = %d, b = %d", a, b);
}

int main() {
    int x = 10, y = 20;

    printf("In Main (Before Function): x = %d, y = %d", x, y);

    swap_by_value(x, y);

    printf("\nIn Main (After Function):  x = %d, y = %d", x, y);
    printf("\n\nNote: The values in main did not change!");

    return 0;
}
