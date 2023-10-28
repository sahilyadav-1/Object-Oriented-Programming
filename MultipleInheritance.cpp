#include<iostream>
using namespace std;

// Multiple Inheritance

class Vehicle{
    public:
    Vehicle(){
        cout<<"This is a vehicle"<<endl;
    }
};

class FourWheeler{
    public:
    FourWheeler(){
        cout<<"This is fourwheeler"<<endl;
    }
};

class Car:public Vehicle, public FourWheeler{

};

int main(){
    
    Car a;

    return 0;
}
