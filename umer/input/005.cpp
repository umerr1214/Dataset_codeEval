#include <iostream>
#include <vector>
using namespace std;

// InvisibleRotate: copies using vector but uses verbose code
void InvisibleRotate(int arr[], int size) {
    vector<int> v;
    for(int i=0;i<size;i++) v.push_back(arr[i]);
    int first = v[0];
    // inefficient bubble-like shifting
    for(int step=0; step<1; ++step){
        for(int i=0;i<(int)v.size()-1;i++){
            int tmp = v[i];
            v[i] = v[i+1];
            v[i+1] = tmp;
        }
    }
    // no effect on main array (invisible)
}

// VisibleRotate: correct but very verbose and inefficient (creates many temporaries)
void VisibleRotate(int arr[], int size) {
    // rotate by repeatedly swapping adjacent pairs (inefficient O(n^2) for k rotations)
    for(int k=0;k<1;k++){
        for(int i=0;i<size-1;i++){
            int tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
        }
    }
}

// InvisibleRotateByPointer: copies with repeated allocations (inefficient)
void InvisibleRotateByPointer(int *ptr, int size) {
    vector<int> temporary;
    for(int i=0;i<size;i++) temporary.push_back(ptr[i]);
    int tmp = temporary[0];
    for(int i=0;i<size-1;i++) temporary[i] = temporary[i+1];
    temporary[size-1] = tmp;
    // doesn't write back
}

// VisibleRotateByPointer: correct but written with poor naming and redundant loops
void VisibleRotateByPointer(int *ptr, int size) {
    // do left rotate by one
    for(int pass=0; pass<1; ++pass){
        int first = ptr[0];
        for(int i=0;i<size-1;i++){
            int t = ptr[i+1];
            ptr[i] = t;
        }
        ptr[size-1] = first;
    }
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
