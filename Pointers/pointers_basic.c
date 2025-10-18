// pointers_basic.c
#include <stdio.h>

int main() {
    printf("=== Basic Pointers in C ===\n\n");

    int num = 10;      // normal variable
    int *ptr;          // pointer variable declaration

    ptr = &num;        // store address of num in pointer

    printf("Value of num      = %d\n", num);
    printf("Address of num    = %p\n", &num);
    printf("Value of ptr      = %p\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);  // dereferencing

    // Changing value using pointer
    *ptr = 25;
    printf("\nAfter changing value using pointer:\n");
    printf("New value of num  = %d\n", num);
    printf("Value at ptr      = %d\n", *ptr);

    return 0;
}
