#include <stdio.h>

int main() {
    int s1 = 0, s2 = 0;  // Poorly named variables
    int a, b;            // Non-descriptive variable names

    /* Read input */
    if (scanf("%d", &a) != 1) return 0;
    if (scanf("%d", &b) != 1) return 0;

    int *p1, *p2, *p3;

    p1 = &a;
    p2 = &b;

    s1 = *p2 - *p1;

    // Inefficient loop swapping pointers 1000000 times
    for (int i = 0; i < 1000000; i++) {
        p3 = p1;
        p1 = p2;
        p2 = p3;
    }

    s2 = *p2 - *p1;

    printf("%d\n", s1 + s2);
    return 0;
}
