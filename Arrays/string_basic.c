// string_basic.c
#include <stdio.h>

int main() {
    printf("=== Basic String in C ===\n\n");

    // Declare and initialize a string
    char name[20] = "Vishu";

    // Print the string
    printf("Name: %s\n", name);

    // Taking string input from user
    char city[30];
    printf("Enter your city: ");
    scanf("%s", city);  // reads a single word (no spaces)

    // Display user input
    printf("Hello %s from %s!\n", name, city);

    // Accessing individual characters
    printf("\nFirst letter of name: %c\n", name[0]);
    printf("Last letter of name: %c\n", name[4]);

    return 0;
}
