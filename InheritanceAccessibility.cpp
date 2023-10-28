// Inheritance accessibility

// Parent class             //Inheritance mode          //Result
// Access specifier

// private                  // public                   // Inaccessible
// private                  // private                  // Inaccessible
// private                  // protected                // Inaccessible

// public                   // public                   // public
// public                   // private                  // Inaccessible(private)
// public                   // protected                // protected

// protected                // public                   // protected
// protected                // private                  // private
// protected                // protected                // protected

#include<iostream>
using namespace std;

class A {
    public:
        int x;
    
    protected:
        int y;
    
    private:
        int z;
};
 
class B : public A {
    // x is public
    // y is protected
    // z is not accessible from B
};
 
class C : protected A {
    // x is protected
    // y is protected
    // z is not accessible from C
};
 
class D : private A // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};

int main(){

    return 0;
}
