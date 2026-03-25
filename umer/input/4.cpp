#include <iostream>
using namespace std;

// InvisibleRotate: copies into fixed-size buffer but doesn't validate size properly
void InvisibleRotate(int arr[], int size) {
    int local[5];
    // if size > 5, overflow; not checked (robustness issue)
    for(int i=0;i<size;i++) local[i] = arr[i];
    int tmp = local[0];
    for(int i=0;i<size-1;i++) local[i] = local[i+1];
    local[size-1] = tmp;
}

// VisibleRotate: works but assumes size>0; no checks for size==0 or nullptr
void VisibleRotate(int arr[], int size) {
    if(arr == nullptr) return; // minimal check but no error reporting
    int tmp = arr[0];
    for(int i=0;i<size-1;i++) arr[i] = arr[i+1];
    arr[size-1] = tmp;
}

// InvisibleRotateByPointer: copies from pointer but doesn't check for null or invalid size
void InvisibleRotateByPointer(int *ptr, int size) {
    if(ptr == nullptr) return;
    int *copy = new int[size];
    for(int i=0;i<size;i++) copy[i] = ptr[i];
    int tmp = copy[0];
    for(int i=0;i<size-1;i++) copy[i] = copy[i+1];
    copy[size-1] = tmp;
    delete[] copy;
}

// VisibleRotateByPointer: performs in-place rotate but no checks for negative size
void VisibleRotateByPointer(int *ptr, int size) {
    if(ptr == nullptr || size <= 0) return;
    int tmp = ptr[0];
    for(int i=0;i<size-1;i++) ptr[i] = ptr[i+1];
    ptr[size-1] = tmp;
}

void printArr(int arr[], int size) {
    for(int i=0;i<size;i++){
        cout<<arr[i];
        if(i<size-1) cout<<" ";
    }
    cout<<"\n";
}

int main() {
    int x[] = {1,2,3,4,5};
    int n = 5;
    InvisibleRotate(x,n);
    printArr(x,n);
    VisibleRotate(x,n);
    printArr(x,n);
    InvisibleRotateByPointer(x,n);
    printArr(x,n);
    VisibleRotateByPointer(x,n);
    printArr(x,n);
    return 0;
}
