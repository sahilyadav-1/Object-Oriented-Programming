#include<iostream>
using namespace std;

// Compile time polymorphism
// Operator Overloading

// Unary operators are overloaded as member functions(++,--)
// Binary operators are overloaded as non member functions(>>,<<)
// as one operand is immute-able
// Some binary operators are overloaded as member functions(+,-)
// as none of operands are immute-able

// operators that can't be overloaded(sizeof,typeid,::,.,.*,?:)

// sizeof - This returns the size of the object or datatype entered as the operand. 
// This is evaluated by the compiler and cannot be evaluated during runtime. 
// The proper incrementing of a pointer in an array of objects 
// relies on the sizeof operator implicitly. 
// Altering its meaning using overloading would cause a fundamental part 
// of the language to collapse.

// typeid - This provides a CPP program with the ability to recover 
// the actual derived type of the object referred to by a pointer or reference. 
// For this operator, the whole point is to uniquely identify a type. 
// If we want to make a user-defined type ‘look’ like another type, 
// polymorphism can be used but the meaning of the typeid operator must 
// remain unaltered, or else serious issues could arise.

// :: - This helps identify and specify the context to which an identifier 
// refers by specifying a namespace. It is completely evaluated at runtime 
// and works on names rather than values. The operands of scope resolution 
// are note expressions with data types and CPP has no syntax for capturing 
// them if it were overloaded. So it is syntactically impossible to overload 
// this operator.

// dot operator(.),pointer to member operator(.*) - see program below
// if we change the implementation of dot operator, it could be overloaded 
// but the dot operator is used to access the member function like in below 
// program. it can create ambiguity.
// Thus, in order to ensure a reliable and non-ambiguous system of accessing 
// class members, the predefined mechanism using class member access operators 
// is absolutely essential. Besides, these operators also work on names and 
// not values and there is no provision (syntactically) to overload them.

// Ternary operator - A function overloading the ternary operator for a class 
// say ABC using the definition
// ABC operator ?: (bool condition, ABC trueExpr, ABC falseExpr);
// would not be able to guarantee that only one of the expressions 
// was evaluated. Thus, the ternary operator cannot be overloaded.

class Irrational{
    public:
    int a;
    int b;
    
    public:
        void solve(int a, int b){
            this->a = a;
            this->b = b;
        }

    Irrational operator+ (Irrational& temp){
        Irrational res;
        res.a = this->a + temp.a;
        // cout<<this->a<<"  "<<temp.a<<"  ";
        res.b = this->b + temp.b;
        return res;
    }

    void print(){
        cout<<a<<" + "<<"i"<<b<<endl;
    }
};

int main(){

    Irrational ab;
    Irrational ba;
    ab.solve(10,11);
    ba.solve(12,13);
    Irrational c = ab + ba;
    c.print();

    return 0;
}
