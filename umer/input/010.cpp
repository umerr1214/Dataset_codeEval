#include <stdio.h>

int main() {
    int Sum1 = 0, Sum2 = 0;
    int A, B;

    /* Read input */
    if (scanf("%d", &A) != 1) return 0;
    if (scanf("%d", &B) != 1) return 0;

    int *Pointer1, *Pointer2, *Pointer3;

    // ❌ Robustness error: Dereferencing uninitialized pointers
    Sum1 = *Pointer1 - *Pointer2;  // Pointer1 and Pointer2 are not initialized yet

    Pointer1 = &A;
    Pointer2 = &B;

    Pointer3 = Pointer1;
    Pointer1 = Pointer2;
    Pointer2 = Pointer3;

    Sum2 = *Pointer2 - *Pointer1;

    printf("%d\n", Sum1 + Sum2);
    return 0;
}
