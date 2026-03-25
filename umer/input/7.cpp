#include <stdio.h>

int main() {
    int Sum1 = 0, Sum2 = 0   // <-- MISSING SEMICOLON (syntax error)
    int A, B;

    /* Read input: A (newline) B (newline) */
    if (scanf("%d", &A) != 1) return 0;
    if (scanf("%d", &B) != 1) return 0;

    int *Pointer1, *Pointer2, *Pointer3;

    Pointer1 = &A;
    Pointer2 = &B;

    Sum1 = *Pointer2 - *Pointer1;

    Pointer3 = Pointer1;
    Pointer1 = Pointer2;
    Pointer2 = Pointer3;

    Sum2 = *Pointer2 - *Pointer1;

    printf("%d\n", Sum1 + Sum2);
    return 0;
}
