//Without Recursion
long long factorial_iterative(int n) {
    long long result = 1;
    if (n < 0) return 0; 
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
//Recursive Approach
long long factorial_recursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}
