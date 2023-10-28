#include<iostream>
using namespace std;

// Inheritance Ambiguity
// Removed by virtual keyword

class A{
    public:
    int a;
};

class B: virtual public A{
    public:
    int b;
};

class C: virtual public A{
    public:
    int c;
};

class D: public B, public C{
    public:
    int d;
};

int main(){

    D obj;

    obj.a = 10;       
    obj.a = 100;      
 
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;
 
    cout << "\n a : " << obj.a;
    cout << "\n b : " << obj.b;
    cout << "\n c : " << obj.c;
    cout << "\n d : " << obj.d << '\n';

    return 0;
}
