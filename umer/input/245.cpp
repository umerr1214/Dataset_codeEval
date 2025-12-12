#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    
    int max;
    
    // Find maximum using nested if - poor readability and efficiency
    if(a>b){if(a>c){if(a>d){max=a;}else{max=d;}}else{if(c>d){max=c;}else{max=d;}}}else{if(b>c){if(b>d){max=b;}else{max=d;}}else{if(c>d){max=c;}else{max=d;}}}
    
    cout<<"Maximum: "<<max<<endl;
    
    return 0;
}