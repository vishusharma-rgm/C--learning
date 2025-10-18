// structure_union.c
#include <stdio.h>
#include <string.h>

// Structure definition
struct Student {
    int id;
    char name[30];
    float marks;
};

// Union definition
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    printf("=== Structure vs Union in C ===\n\n");

    // Using structure
    struct Student s1;
    s1.id = 101;
    strcpy(s1.name, "Vishu");
    s1.marks = 89.5;

    printf("Structure Example:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    printf("Size of structure: %lu bytes\n\n", sizeof(s1));

    // Using union
    union Data data;

    printf("Union Example:\n");
    data.i = 10;
    printf("Integer: %d\n", data.i);

    data.f = 20.5;
    printf("Float: %.2f\n", data.f);

    strcpy(data.str, "Hello");
    printf("String: %s\n", data.str);

    printf("Size of union: %lu bytes\n", sizeof(data));

    return 0;
}
