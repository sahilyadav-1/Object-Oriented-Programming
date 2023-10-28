#include<iostream>
using namespace std;

// Hybrid Inheritance

class Vehicle{
    public:
    Vehicle(){
        cout<<"This is vehicle"<<endl;
    }
};

class Fare{
    public:
    Fare(){
        cout<<"Fare of Vehicle"<<endl;
    }
};

class Car: public Vehicle{

};

class Bus: public Vehicle, public Fare{

};

int main(){

    Car a;
    Bus obj;

    return 0;
}
