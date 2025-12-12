#include <iostream>
using namespace std;

// InvisibleRotate: works on a local copy (no effect on main)
void InvisibleRotate(int arr[], int size) {
    int *local = new int[size];
    for(int i=0;i<size;i++) local[i] = arr[i];
    int first = local[0];
    for(int i=0;i<size-1;i++) local[i] = local[i+1];
    local[size-1] = first;
    delete[] local;
}

// VisibleRotate: left-rotate the original array (visible in main)
void VisibleRotate(int arr[], int size) {
    if(size <= 1) return;
    int first = arr[0];
    for(int i=0;i<size-1;i++) arr[i] = arr[i+1];
    arr[size-1] = first;
}

// InvisibleRotateByPointer: receives pointer but operates on a copy (no effect on main)
void InvisibleRotateByPointer(int *ptr, int size) {
    if(ptr == nullptr || size <= 0) return;
    int *copy = new int[size];
    for(int i=0;i<size;i++) copy[i] = ptr[i];
    int first = copy[0];
    for(int i=0;i<size-1;i++) copy[i] = copy[i+1];
    copy[size-1] = first;
    delete[] copy;
}

// VisibleRotateByPointer: rotates the array via pointer (visible in main)
void VisibleRotateByPointer(int *ptr, int size) {
    if(ptr == nullptr || size <= 1) return;
    int first = ptr[0];
    for(int i=0;i<size-1;i++) ptr[i] = ptr[i+1];
    ptr[size-1] = first;
}

void printArr(int arr[], int size) {
    for(int i=0;i<size;i++){
        cout << arr[i];
        if(i < size-1) cout << " ";
    }
    cout << "\n";
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
