// recursion.c
#include <stdio.h>

// Function declaration
int factorial(int n);
void countdown(int n);

int main() {
    printf("=== Recursion in C ===\n\n");

    int num = 5;
    printf("Factorial of %d = %d\n\n", num, factorial(num));

    printf("Countdown from %d:\n", num);
    countdown(num);

    return 0;
}

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;  // Base case
    else
        return n * factorial(n - 1);  // Recursive call
}

// Recursive function for countdown
void countdown(int n) {
    if (n == 0) {
        printf("Blast off!\n");
        return;
    }
    printf("%d\n", n);
    countdown(n - 1);  // Recursive call
}

