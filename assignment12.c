#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int findSmallestDivisor(int n) {
    if (n < 2) return n; 
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) return i;
    }
    return n;
}

int main() {
    int n1, n2;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    int a = (n1 < 0) ? -n1 : n1;
    int b = (n2 < 0) ? -n2 : n2;

    printf("\n--- Results ---\n");
    printf("Smallest Divisor of %d: %d\n", n1, findSmallestDivisor(a));
    printf("Smallest Divisor of %d: %d\n", n2, findSmallestDivisor(b));
    printf("Greatest Common Divisor (GCD): %d\n", findGCD(a, b));

    return 0;
}
