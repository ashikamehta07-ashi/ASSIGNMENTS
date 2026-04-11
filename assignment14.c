#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, i = 0, remainder;

    printf("Enter a binary number (using only 0s and 1s): ");
    scanf("%lld", &binary);

    long long temp = binary; // Keep a copy for the final message

    while (binary != 0) {
        
        remainder = binary % 10;
        
        decimal += remainder * pow(2, i);
        
        binary = binary / 10;
        
        i++;
    }

    printf("Decimal equivalent of %lld is: %d\n", temp, decimal);

    return 0;
}
