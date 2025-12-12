#include <iostream>
using namespace std;

class ArrayInt { int* p; int s;
public: ArrayInt() { p = nullptr; s = 0; }
    ArrayInt(const int* a, int sz) { s = sz; p = new int[s]; for(int i=0;i<s;i++) p[i]=a[i]; }
    ArrayInt(const ArrayInt &o) { cout<<"Copy Constructor Called"<<endl; s=o.s; p=new int[s]; for(int i=0;i<s;i++) p[i]=o.p[i]; }
    ~ArrayInt() { if(p) delete[] p; }
    int getS() { return s; }
    void disp() { for(int i=0;i<s;i++) cout<<p[i]<<" "; cout<<endl; }
    bool operator==(const ArrayInt& r) const { if(s!=r.s) return false; for(int i=0;i<s;i++) if(p[i]!=r.p[i]) return false; return true; }
    bool operator!=(const ArrayInt& r) const { return !(*this==r); }
    
    // Inefficient implementation: Resizing completely for every single element add
    ArrayInt& operator+=(const ArrayInt& r) {
        for(int i=0; i<r.s; i++) {
            *this += r.p[i]; // Calls the other += which does full resize/copy
        }
        return *this;
    }

    ArrayInt& operator+=(int n) {
        int ns = s+1; int* np = new int[ns];
        for(int i=0;i<s;i++) np[i]=p[i];
        np[s]=n; delete[] p; p=np; s=ns;
        return *this;
    }

    ArrayInt& operator-=(int n) {
        // Poor readability and inefficient search
        int idx=-1;
        for(int i=0;i<s;i++) if(p[i]==n) { idx=i; break; }
        if(idx!=-1) {
            int ns=s-1; int* np=new int[ns];
            for(int i=0,j=0;i<s;i++) if(i!=idx) np[j++]=p[i];
            delete[] p; p=np; s=ns;
        }
        return *this;
    }
    
    ArrayInt& operator-=(const ArrayInt& r) {
        for(int i=0;i<r.s;i++) *this-=r.p[i];
        return *this;
    }
};

int main() {
    int x[]={1,2,3}; ArrayInt a(x,3); a.disp();
    a+=4; a.disp();
    return 0;
}