#include <iostream>
#include <string>
using namespace std;

class CRecord 
{
private:
    string name;
    int itemNumber;

public:
    bool getRecord();
    void putRecord() const;
};

bool CRecord::getRecord()
{
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter item number: ";
    cin >> itemNumber;
    
    // Handle input stream errors
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        itemNumber = 0;
    } else {
        cin.ignore(); // Clear the newline from buffer
    }
    
    return itemNumber != 0;
}

void CRecord::putRecord() const
{
    cout << "Name: " << name << ", Item Number: " << itemNumber << endl;
}

int main()
{
    CRecord record;
    
    cout << "Enter records (enter 0 for item number to quit):" << endl;
    
    while (record.getRecord())
    {
        record.putRecord();
    }
    
    cout << "Zero item number entered. Program terminated." << endl;
    
    return 0;
}