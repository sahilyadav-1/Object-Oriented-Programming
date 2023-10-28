#include<iostream>
using namespace std;

class Human{

    public:

    int age;
    string name;

};

int main(){
    
    //Static object
    Human obj;
    obj.age = 20;
    cout<<obj.age;
    cout<<endl;

    //Dynamic object
    Human *obj1 = new Human();
    obj1->age = 21;
    cout<<obj1->age;

    return 0;
}
