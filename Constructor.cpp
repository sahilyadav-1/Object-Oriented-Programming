//Deep and Shallow Copy are created when copy constructor is called
//Shallow Copy
//if none variables of object are in heap memory then shallow is made
//otherwise deep copy
//if shallow copy of dynamic variables are made
//then copied object variable will also reference the same memory
//that creates ambiguity
//Deep Copy
//we need to explicitly define the copy constructor and 
//assign dynamic memory as well if required
//it is also required to dynamically allocate
//memory to the variables in the another constructor

#include<iostream>
using namespace std;

class Human{

    public:
    int age;
    string name;

    //Default Constructor
    Human(){
        cout<<"Default Constructor"<<endl;
        age = 20;
        name = "Human ABC";
    }

    //Parameterized Constructor
    Human(int age, string name){
        cout<<"Parameterized Constructor"<<endl;
        this->age = age;
        this->name = name;
    }

    //Multiple Parameterized constructor can be created
    Human(int age){
        cout<<"Second Parameterized Constructor"<<endl;
        this->age = age;
    }

    //Copy Constructor
    //By Reference is passed because we making copy of object for which 
    //Copy constructor is also called in background
    //it will be stuck in infinite loop if by reference is not passed 
    Human(Human& temp){
        cout<<"Copy Constructor"<<endl;
        this->age = temp.age;
        this->name = temp.name;
    }

    //Destructor
    ~Human(){
        cout<<"Destructor Called"<<endl;
    }
};

int main(){
    
    Human obj;
    cout<<obj.age;
    cout<<endl;
    cout<<obj.name;
    cout<<endl;

    Human obj1(21,"Human");
    cout<<obj1.age;
    cout<<endl;
    cout<<obj1.name;
    cout<<endl;

    Human *obj2 = new Human(22,"ABC");
    cout<<obj2->age;
    cout<<endl;
    cout<<obj2->name;
    cout<<endl;

    Human obj3(23);
    cout<<obj3.age;
    cout<<endl;
    
    Human obj4(obj1);
    cout<<obj4.age;
    cout<<endl;
    cout<<obj4.name;
    cout<<endl;
    
    //For Dynamic
    //Destructor
    delete obj2;
    return 0;
}
