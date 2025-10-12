#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number between 1 to 4: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You selected One\n");
            break;
        case 2:
            printf("You selected Two\n");
            break;
        case 3:
            printf("You selected Three\n");
            break;
        case 4:
            printf("You selected Four\n");
            break;
        default:
            printf("Invalid choice! Please enter 1-4.\n");
    }

    return 0;
}
