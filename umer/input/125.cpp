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
    cin.ignore(); // Clear the newline from buffer
    
    return itemNumber != 0;
}

void CRecord::putRecord() const
{
    cout << "Name: " << name << ", Item Number: " << itemNumber << endl;
}

int main()
{
    CRecord record;
    
    // Poor readability - using do-while instead of while for this logic
    do
    {
        if (record.getRecord())
        {
            record.putRecord();
        }
        else
        {
            break;
        }
    } while (true);
    
    cout << "Zero item number entered. Program terminated." << endl;
    
    return 0;
}