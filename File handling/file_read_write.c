// file_read_write.c
#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    // Writing to a file
    fp = fopen("example.txt", "w"); // "w" = write mode
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter some text to write to file: ");
    fgets(data, sizeof(data), stdin);

    fputs(data, fp);
    fclose(fp);
    printf("Data written to file successfully!\n\n");

    // Reading from a file
    fp = fopen("example.txt", "r"); // "r" = read mode
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("Reading data from file:\n");
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }

    fclose(fp);
    return 0;
}
