// append_data.c
#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    // Open file in append mode
    fp = fopen("example.txt", "a"); // "a" = append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append to file: ");
    fgets(data, sizeof(data), stdin);

    fputs(data, fp);
    fclose(fp);

    printf("Data appended successfully!\n");

    // Display updated file content
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error reopening file!\n");
        return 1;
    }

    printf("\nUpdated file content:\n");
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }

    fclose(fp);
    return 0;
}
