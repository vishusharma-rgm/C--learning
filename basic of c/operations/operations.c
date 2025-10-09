// File: operators.c
#include <stdio.h>

int main() {
    int a = 10, b = 3;

    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);

    // Relational Operators
    printf("Relational Operators:\n");
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n\n", a <= b);

    // Logical Operators
    printf("Logical Operators:\n");
    printf("(a > b) && (a != b) = %d\n", (a > b) && (a != b));
    printf("(a < b) || (a == b) = %d\n", (a < b) || (a == b));
    printf("!(a == b) = %d\n\n", !(a == b));

    // Bitwise Operators
    printf("Bitwise Operators:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n\n", a >> 1);

    // Assignment Operators
    printf("Assignment Operators:\n");
    int c = a;
    printf("c = %d\n", c);
    c += b;
    printf("c += b => %d\n", c);
    c -= b;
    printf("c -= b => %d\n", c);
    c *= b;
    printf("c *= b => %d\n", c);
    c /= b;
    printf("c /= b => %d\n", c);
    c %= b;
    printf("c %%= b => %d\n", c);

    return 0;
}
