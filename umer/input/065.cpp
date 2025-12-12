#include <iostream>
#include <cstring>
using namespace std;

// ❌ READABILITY ISSUE: Poor function name and no documentation
char* f(char s[], int& sz, char t) {
// ❌ READABILITY ISSUE: Poor formatting and no comments
char* p=nullptr;
for(int i=0;i<sz;i++){
if(s[i]==t){
p=&s[i];
break;
}
}
    
    if (p == nullptr) {
        return s;
    }
    
    // ❌ READABILITY ISSUE: Cryptic variable names
    int l = p - s;
    char* r = new char[l + 1];
    
    // ❌ EFFICIENCY ISSUE: Inefficient character-by-character copying instead of memcpy
    for (int i = 0; i < l; i++) {
        r[i] = s[i];
    }
    r[l] = '\0';
    
    // ❌ EFFICIENCY ISSUE: Inefficient string manipulation
    int al = sz - l - 1;
    // ❌ EFFICIENCY ISSUE: Character-by-character copying instead of memmove
    for (int i = 0; i < al; i++) {
        s[i] = s[l + 1 + i];
    }
    s[al] = '\0';
    
    sz = al;
    
    return r;
}

int main() {
    // ❌ READABILITY ISSUE: No comments explaining the program flow
    char s[] = "This-a-sample-string";
cout<<s<<endl;  // ❌ READABILITY ISSUE: Poor spacing
    
char t='-';  // ❌ READABILITY ISSUE: Single letter variable names
int sz=strlen(s);  // ❌ READABILITY ISSUE: Poor spacing and variable naming
    
    // ❌ READABILITY ISSUE: Cryptic variable names
    char* r1 = f(s, sz, t);
cout<<r1<<endl;  // ❌ READABILITY ISSUE: Poor spacing
cout<<s<<endl;
cout<<"------------------"<<endl;  // ❌ READABILITY ISSUE: Poor spacing
    
    char* r2 = f(s, sz, t);
cout<<r2<<endl;  // ❌ READABILITY ISSUE: Poor spacing
cout<<s<<endl;
    
    // ❌ READABILITY ISSUE: No proper cleanup section organization
delete[] r1;delete[] r2;  // ❌ READABILITY ISSUE: Multiple statements on one line
    
    return 0;
}