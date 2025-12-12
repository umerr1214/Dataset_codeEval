#include <stdio.h>

int main() {
    int Sum1 = 0, Sum2 = 0;
    int A, B;

    /* Read input */
    if (scanf("%d", &A) != 1) return 0;
    if (scanf("%d", &B) != 1) return 0;

    int *Pointer1, *Pointer2, *Pointer3;

    Pointer1 = &A;
    Pointer2 = &B;

    // ❌ Semantic error: Using variables A and B directly instead of pointers
    Sum1 = B - A;

    Pointer3 = Pointer1;
    Pointer1 = Pointer2;
    Pointer2 = Pointer3;

    Sum2 = *Pointer2 - *Pointer1;

    printf("%d\n", Sum1 + Sum2);
    return 0;
}
