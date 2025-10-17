// 1Darray.c
#include <stdio.h>

int main() {
    printf("=== 1D Array in C ===\n\n");

    int n;

    // Taking array size from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // 1D array declaration

    // Input elements
    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display elements
    printf("\nYou entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Sum of array elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("\n\nSum of all elements = %d\n", sum);

    return 0;
}
