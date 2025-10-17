#include <stdio.h>

/* Use static inline for safer compilation */
static inline int add_inline(int a, int b) {
    return a + b;
}

static inline int mul_static_inline(int a, int b) {
    return a * b;
}

int add_regular(int a, int b) {
    return a + b;
}

void demo_inline_behavior(void) {
    int x = 6, y = 7;

    int s1 = add_inline(x, y);
    int s2 = mul_static_inline(x, y);
    int s3 = add_regular(x, y);

    printf("Using add_inline(%d,%d) = %d\n", x, y, s1);
    printf("Using mul_static_inline(%d,%d) = %d\n", x, y, s2);
    printf("Using add_regular(%d,%d) = %d\n", x, y, s3);
}

int main(void) {
    demo_inline_behavior();

    long sum = 0;
    for (int i = 0; i < 1000000; ++i) {
        sum += add_inline(i, 1);
    }
    printf("Loop sum (using add_inline) = %ld\n", sum);

    return 0;
}