#include<iostream>
using namespace std;

// Multilevel Inheritance

class B{
    public:
    B(){
        cout<<"This is B"<<endl;
    }
};

class C: public B{
    public:
    C(){
        cout<<"This is C"<<endl;
    }
};

class A: public C{

};

int main(){

    A a;

    return 0;
}
