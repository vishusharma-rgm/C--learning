#include <stdio.h>

int main() {
    int num = 5;

    // IF, ELSE IF, ELSE
    printf("Conditional Statements:\n");
    if (num > 0) {
        printf("Number is positive.\n");
    } else if (num < 0) {
        printf("Number is negative.\n");
    } else {
        printf("Number is zero.\n");
    }

    // SWITCH CASE
    printf("\nSwitch Statement:\n");
    switch (num) {
        case 1:
            printf("Number is One\n");
            break;
        case 5:
            printf("Number is Five\n");
            break;
        default:
            printf("Number is something else\n");
    }

    // FOR LOOP
    printf("\nFor Loop:\n");
    for (int i = 1; i <= 3; i++) {
        printf("i = %d\n", i);
    }

    // WHILE LOOP
    printf("\nWhile Loop:\n");
    int i = 1;
    while (i <= 3) {
        printf("i = %d\n", i);
        i++;
    }

    // DO-WHILE LOOP
    printf("\nDo-While Loop:\n");
    i = 1;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i <= 3);

    // BREAK and CONTINUE
    printf("\nBreak and Continue:\n");
    for (int j = 1; j <= 5; j++) {
        if (j == 3)
            continue; // Skip 3
        if (j == 5)
            break; // Stop at 5
        printf("j = %d\n", j);
    }

    // GOTO
    printf("\nGoto Statement:\n");
    int x = 0;
    if (x == 0)
        goto label;

    printf("This line will be skipped.\n");

label:
    printf("Jumped to label using goto.\n");

    return 0;
}
