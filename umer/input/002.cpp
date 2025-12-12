#include <iostream>
using namespace std;

// InvisibleRotate: changes a local copy so main not affected
void InvisibleRotate(int arr[], int size) {
    int local[5];
    for(int i=0;i<size;i++) local[i] = arr[i];
    int tmp = local[size-1]; // WRONG: using right-rotate instead of left
    for(int i=size-1;i>0;--i) local[i] = local[i-1];
    local[0] = tmp;
    // local changed but main unchanged -> invisible
}

// VisibleRotate: intended left-rotate but implemented incorrectly (logical bug)
void VisibleRotate(int arr[], int size) {
    // BUG: rotates by swapping symmetric elements instead of shifting
    for(int i=0;i<size/2;i++){
        int t = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = t;
    }
}

// InvisibleRotateByPointer: uses pointer but makes local copy (invisible)
void InvisibleRotateByPointer(int *ptr, int size) {
    int copy[5];
    for(int i=0;i<size;i++) copy[i]=ptr[i];
    int tmp = copy[0];
    for(int i=0;i<size-1;i++) copy[i]=copy[i+1];
    copy[size-1] = tmp;
}

// VisibleRotateByPointer: correct left rotate on original
void VisibleRotateByPointer(int *ptr, int size) {
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
