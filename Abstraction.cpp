// Abstraction -> Implementation complexity hiding

// Encapsulation v/s Abstraction

// Encapsulation
// Encapsulation hides variables or some implementation 
// that may be changed so often in a class 
// to prevent outsiders access it directly. 
// They must access it via getter and setter methods.

// Abstraction
// Abstraction is used to hide something too, 
// but in a higher degree (class, interface).
// Clients who use an abstract class (or interface) 
// do not care about what it was, 
// they just need to know what it can do.

// Key Differences

// Encapsulation
// It solves the problem on implementation level
// It means hiding the code and data into a single unit to protect the data from outside world
// It means hiding the internal details of how an object does something

// Astraction
// It solves the problem on design level
// It means hiding the unwanted data and giving relevant data
// It focus on what the object does rather than how it does

#include<iostream>
using namespace std;

class Human{

    private:
    int age;
    int weight;

    public:
    void set(int a, int b){
        age = a;
        weight = b;
    }

    void display(){
        cout<<age;
        cout<<endl;
        cout<<weight;
    }
};

int main(){
   
    Human a;
    a.set(10,19);
    a.display();

    return 0;
}
