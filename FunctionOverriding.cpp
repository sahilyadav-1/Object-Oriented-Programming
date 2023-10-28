#include<iostream>
using namespace std;

// Runtime polymorphism
// Function Overriding
// virtual function

class Base{
    public:
    virtual void print(){
        cout<<"Print Base"<<endl;
    }
    void show(){
        cout<<"Show Base"<<endl;
    }
};

class Derived: public Base{
    public:
    void print(){
        cout<<"Print Derived"<<endl;
    }
    void show(){
        cout<<"Show Derived"<<endl;
    }
};

int main(){
   
    Base *bptr;
    Derived d;
    bptr = &d;
    
    bptr -> print();
    bptr -> show();

    return 0;
}
