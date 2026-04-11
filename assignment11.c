#include <stdio.h>
#include <math.h>


long long getFactorial(int n) {
    if (n < 0) return 0;
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
void printPrimeFactors(int n) {
    printf("Prime Factors: ");
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 2) printf("%d", n);
    printf("\n");
}
int main() {
    int num;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }
    printf("\n--- Results for %d ---\n", num);

    printf("a) Square root: %.2f\n", sqrt(num));
  
    printf("b) Square: %d\n", num * num);

    printf("c) Cube: %d\n", num * num * num);
    
    if (isPrime(num))
        printf("d) Prime Check: %d is a Prime Number\n", num);
    else
        printf("d) Prime Check: %d is NOT a Prime Number\n", num);
    
    printf("e) Factorial: %lld\n", getFactorial(num));
    
    printPrimeFactors(num);

    return 0;
}
