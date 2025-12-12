#include<iostream>
using namespace std;class Vehicle{public:void start(){cout<<"Vehicle started"<<endl;}};class Car:public Vehicle{};class Bike:public Vehicle{};int main(){Car c;Bike b;c.start();b.start();return 0;}
