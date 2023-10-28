#include<iostream>
using namespace std;

// Compile time polymorphism
// Operator Overloading

class PreIncrement{
    public:
    int a;

    PreIncrement(int a=0){
        this->a = a;
    }

    // Pre Increment
    PreIncrement operator++(){
        PreIncrement res;
        res.a = ++a;
        return res;
    }

    void display(){
        cout<<a<<endl;
    }
};

int main(){
    PreIncrement a(10);
    PreIncrement b = ++a;
    b.display();
    return 0;
}
