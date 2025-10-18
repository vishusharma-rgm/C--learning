// union_intro.c
#include <stdio.h>
#include <string.h>

// Union definition
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    printf("=== Introduction to Union in C ===\n\n");

    union Data data;

    // Assign integer value
    data.i = 100;
    printf("Integer: %d\n", data.i);

    // Assign float value (overwrites previous value)
    data.f = 98.76;
    printf("Float: %.2f\n", data.f);

    // Assign string value (overwrites previous value)
    strcpy(data.str, "Hello C");
    printf("String: %s\n", data.str);

    // Show size of union
    printf("\nSize of union: %lu bytes\n", sizeof(data));

    return 0;
}
