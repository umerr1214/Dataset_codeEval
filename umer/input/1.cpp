#include <iostream>
using namespace std;

void InvisibleRotate(int arr[], int size) {
    // make a local copy, rotate locally (left rotate by one)
    int tmp = arr[0];
    for(int i=0; i<size-1; ++i)
        arr[i] = arr[i+1];
    arr[size-1] = tmp;
}

void VisibleRotate(int arr[], int size) {
    // rotate main array
    int tmp = arr[0];
    for(int i=0; i<size-1; ++i)
        arr[i] = arr[i+1];
    arr[size-1] = tmp;
}

void InvisibleRotateByPointer(int *ptr, int size) {
    // local copy using new
    int *copy = new int[size];
    for(int i=0; i<size; ++i) copy[i] = ptr[i];
    int tmp = copy[0];
    for(int i=0; i<size-1; ++i)
        copy[i] = copy[i+1]
    copy[size-1] = tmp;
    delete[] copy;
}

void VisibleRotateByPointer(int *ptr, int size) {
    int tmp = ptr[0];
    for(int i=0; i<size-1; ++i)
        ptr[i] = ptr[i+1];
    ptr[size-1] = tmp;
}

void printArr(int arr[], int size) {
    for(int i=0; i<size; ++i) {
        cout << arr[i] << " ";
    cout << endl;
    }
}

int main() {
    int x[] = {1,2,3,4,5};
    int n = 5;
    InvisibleRotate(x, n);
    printArr(x, n);
    VisibleRotate(x, n);
    printArr(x, n);
    InvisibleRotateByPointer(x, n);
    printArr(x, n);
    VisibleRotateByPointer(x, n);
    printArr(x, n);
    return 0;
}
