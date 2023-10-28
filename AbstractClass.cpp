#include<iostream>
using namespace std;

// Abstract class
// A class is abstract if it has at least one pure virtual function. 
// We can have pointers and references of abstract class type. 
// If we do not override the pure virtual function in derived class, 
// then derived class also becomes abstract class. 
// An abstract class can have constructors. 

class Base{
    public:
    virtual void func() = 0;
};

class Derived: public Base{
    public:
    void func(){
        cout<<"func Called"<<endl;
    }
};

int main(){
    // Derived d;
    // d.func();

    Base *bptr = new Derived();
    bptr -> func();
    
    return 0;
}
