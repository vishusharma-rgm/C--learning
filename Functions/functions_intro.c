#include <stdio.h>

// Function declaration (prototype)
void greet();
int add(int a, int b);
void print_sum(int x, int y);

int main() {
    printf("=== Introduction to Functions in C ===\n\n");

    // Function call
    greet();

    int num1 = 10, num2 = 20;

    // Calling a function that returns a value
    int result = add(num1, num2);
    printf("Sum returned by add() = %d\n", result);

    // Calling a function that prints the sum directly
    print_sum(num1, num2);

    return 0;
}

// Function definition
void greet() {
    printf("Hello! Welcome to C Functions.\n");
}

// Function definition with return value
int add(int a, int b) {
    return a + b;
}

// Function definition with parameters but no return value
void print_sum(int x, int y) {
    printf("The sum of %d and %d is %d\n", x, y, x + y);
}
