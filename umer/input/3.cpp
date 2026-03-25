#include <iostream>
using namespace std;

// InvisibleRotate: makes a true local copy and left-rotates it (invisible)
void InvisibleRotate(int arr[], int size) {
    int local[5];
    for(int i=0;i<size;i++) local[i] = arr[i];
    int tmp = local[0];
    for(int i=0;i<size-1;i++) local[i] = local[i+1];
    local[size-1] = tmp;
}

// VisibleRotate: attempts to compute size via sizeof -> semantic bug: arr decays to pointer
void VisibleRotate(int arr[], int size) {
    // Wrong approach: using sizeof(arr) here yields size of pointer not full array
    int n = sizeof(arr)/sizeof(arr[0]); // semantic error: this does not give array length
    if(n <= 0) n = size; // fallback but logic inconsistent
    int tmp = arr[0];
    for(int i=0;i<n-1;i++) arr[i] = arr[i+1];
    arr[n-1] = tmp;
}

// InvisibleRotateByPointer: pointer passed but a local copy is rotated (invisible)
void InvisibleRotateByPointer(int *ptr, int size) {
    int copy[5];
    for(int i=0;i<size;i++) copy[i]=ptr[i];
    int tmp = copy[0];
    for(int i=0;i<size-1;i++) copy[i]=copy[i+1];
    copy[size-1]=tmp;
}

// VisibleRotateByPointer: correct pointer-based rotate
void VisibleRotateByPointer(int *ptr, int size) {
    int tmp = ptr[0];
    for(int i=0;i<size-1;i++) ptr[i] = ptr[i+1];
    ptr[size-1] = tmp;
}

void printArr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
        if(i<size-1) cout<<" ";
    }
    cout<<"\n";
}

int main(){
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
