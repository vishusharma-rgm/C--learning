// pointer_to_pointer.c
#include <stdio.h>

int main() {
    printf("=== Pointer to Pointer in C ===\n\n");

    int num = 10;       // Normal variable
    int *ptr;           // Pointer to int
    int **pptr;         // Pointer to pointer

    ptr = &num;         // ptr stores address of num
    pptr = &ptr;        // pptr stores address of ptr

    // Displaying all values and addresses
    printf("Value of num          = %d\n", num);
    printf("Address of num        = %p\n", &num);

    printf("\nValue of ptr (address of num) = %p\n", ptr);
    printf("Value pointed by ptr           = %d\n", *ptr);

    printf("\nValue of pptr (address of ptr) = %p\n", pptr);
    printf("Value pointed by pptr (ptr)    = %p\n", *pptr);
    printf("Value pointed by *pptr (num)   = %d\n", **pptr);

    // Modify value using double pointer
    **pptr = 50;
    printf("\nAfter modifying value using **pptr:\n");
    printf("Value of num = %d\n", num);

    return 0;
}

