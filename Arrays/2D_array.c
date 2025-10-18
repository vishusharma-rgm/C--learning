// 2Darray.c
#include <stdio.h>

int main() {
    printf("=== 2D Array in C ===\n\n");

    int rows, cols;

    // Taking size of 2D array from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];  // 2D array declaration

    // Input elements
    printf("\nEnter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the array
    printf("\nThe 2D Array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Calculate sum of all elements
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
