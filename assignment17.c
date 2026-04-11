#include <stdio.h>
#include <math.h>

int main() {
    int i, n;
    float x, degree, term, sum;

    printf("Enter the angle in degrees: ");
    scanf("%f", &degree);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    x = degree * (3.14159 / 180.0);

    term = x;  // The first term of the series is 'x'
    sum = x;

    for (i = 1; i < n; i++) {
        term = term * (-1 * x * x) / ((2 * i) * (2 * i + 1));
        sum = sum + term;
    }

    printf("\nSum of sine series up to %d terms: %.4f\n", n, sum);
    printf("Actual sin(%.2f) using math.h: %.4f\n", degree, sin(x));

    return 0;
}
