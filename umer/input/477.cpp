#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reverseString(std::string str) {
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    string text = "hello";
    cout << "Original: " << text << endl;
    reverseString(text);
    cout << "Reversed: " << text << endl;
    return 0;
}