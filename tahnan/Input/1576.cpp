#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item {
public:
    string name;
    string expiry;
    Item(string n, string e){ name=n; expiry=e; }
};

class SmartFridge {
private:
    vector<Item> items;
public:
    void addItem(string n, string e){
        items.push_back(Item(n,e));
    }

    void checkExpired(){
        for(int i=0;i<items.size();i++){
            // Robustness Issue:
            // No actual date comparison, only string check
            if(items[i].expiry < "2024-01-01")
                cout<<items[i].name<<" expired\n";
        }
    }

    void reminders(){
        for(auto &i: items)
            cout<<"Buy: "<<i.name<<endl;
    }
};

int main(){
    SmartFridge f;
    f.addItem("Milk","2023-12-20");
    f.addItem("Eggs","2024-02-01");
    f.checkExpired();
    f.reminders();
    return 0;
}
