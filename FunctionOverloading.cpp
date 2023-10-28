#include<iostream>
using namespace std;

// Compile time polymorphism
// Function Overloading

// function should have same name
// Function Overloading can be done by changing no.of parameters,
// parameter data type, but not by function return type 

class Math{

    public:
    int add(int a, int b){
        return a+b;
    }

    double add(int a, double b){
        return a+b;
    }

    int add(int a, int b, int c){
        return a+b+c;
    }

};

int main(){

    Math a;

    cout<<a.add(2,3);
    cout<<endl;
    cout<<a.add(2,3.5);
    cout<<endl;
    cout<<a.add(2,3,4);

    return 0;
}
