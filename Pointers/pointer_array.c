// pointer_array.c
#include <stdio.h>

int main() {
    printf("=== Pointer and Array in C ===\n\n");

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;   // pointer to int
    ptr = arr;  // points to the first element (same as &arr[0])

    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\t", i, *(ptr + i)); // pointer arithmetic
        printf("Address = %p\n", (ptr + i));
    }

    // Another way — modifying elements using pointer
    printf("\nDoubling array elements using pointer...\n");
    for (int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) * 2;
    }

    printf("\nUpdated array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
