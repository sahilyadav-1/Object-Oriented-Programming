#include<iostream>
using namespace std;

// Hierarchical Inheritance

class A{
    public:
    A(){
        cout<<"This is A"<<endl;
    }
};

class B: public A{
    public:
    B(){
        cout<<"This is B"<<endl;
    }
};

class C: public A{
    public:
    C(){
        cout<<"This is C"<<endl;
    }
};


int main(){

    B b;
    C c;

    return 0;
}
