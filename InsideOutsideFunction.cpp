// Inside function
// Outside function

#include<iostream>
using namespace std;

class Human{
    public:
    int age;
    string name;

    void printName();

    void printAge(){
        cout<<"Human's age is "<<age<<endl;
    }
};

void Human :: printName(){
    cout<<"My name is "<<name<<endl;
}

int main(){

    Human obj;

    obj.name="Human Yadav";
    obj.printName();

    obj.age=20;
    obj.printAge();

    return 0;
}
