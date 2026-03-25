#include <stdio.h>

int main() {
    int Sum1, Sum2;
    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);

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
