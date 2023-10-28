#include<iostream>
using namespace std;

// Inheritance Ambiguity
// Removed by scope resolution operator

class A{
    public:
    int a;
};

class B: public A{
    public:
    int b;
    void solve(){
        cout<<"Solve B"<<endl;
    }
};

class C: public A{
    public:
    int c;
    void solve(){
        cout<<"Solve C"<<endl;
    }
};

class D: public B, public C{
    public:
    int d;
};

int main(){

    D obj;

    obj.C::solve();
    
    // obj.a = 10;      //Error
    // obj.a = 100;     //Error

    obj.B::a = 10;
    obj.C::a = 100;

    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout << " a from ClassB  : " << obj.B::a;
    cout << "\n a from ClassC  : " << obj.C::a;
 
    cout << "\n b : " << obj.b;
    cout << "\n c : " << obj.c;
    cout << "\n d : " << obj.d << '\n';

    return 0;
}
