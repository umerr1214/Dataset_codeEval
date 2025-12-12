#include <iostream>
#include <vector>
using namespace std;
class Car{
public:
    string name;
    bool avail;
    Car(string n){name=n;avail=true;}
};
class Rental{
    vector<Car> cars;
public:
    void add(Car c){cars.push_back(c);}
    void rent(string n){
        for(int i=0;i<cars.size();i++){
            if(cars[i].name==n){
                if(cars[i].avail){
                    cars[i].avail=false;
                    cout<<n<<" rented"<<endl;
                    return;
                } else {
                    cout<<n<<" not available"<<endl;
                    return;
                }
            }
        }
        cout<<n<<" not found"<<endl;
    }
    void display(){
        for(int i=0;i<cars.size();i++){
            if(cars[i].avail) cout<<cars[i].name<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Rental r;
    r.add(Car("Honda"));
    r.add(Car("Toyota"));
    r.rent("Honda");
    r.rent("Ford");
    r.display();
    return 0;
}
