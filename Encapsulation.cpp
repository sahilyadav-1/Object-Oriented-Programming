// Public -> Can be accessed inside, outside and derived class
// Private -> Can be accessed inside
// Protected -> Can be accessed inside and derived class

// Encapsulation -> Data / Information hiding

// Data member(Private)
// member function(public)

#include<iostream>
using namespace std;

class Human{

    private:
    int age;
    int weight;

    public:
    int getAge(){
        return this->age;
    }

};

int main(){

    Human a;

    // Can't be accessed fully encapsulated 
    // a.age;
    // a.weight;

    cout<<a.getAge();

    return 0;
}
