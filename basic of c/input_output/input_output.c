// input_output.c
#include <stdio.h>

int main() {
    int age;
    float height;
    char name[50];

    // Taking input
    printf("Enter your name: ");
    scanf("%s", name);  // Reads one word (no spaces)

    printf("Enter your age: ");
    scanf("%d", &age);  // %d for integer

    printf("Enter your height in meters: ");
    scanf("%f", &height);  // %f for float

    // Displaying output
    printf("\n--- User Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);

    return 0;
}