#include<iostream>
using namespace std;

// Single Inheritance

#include<iostream>
using namespace std;

class A
{
	protected:
	int a;

	public:
		void set_A(int x)
		{
			a=x;		
		}

		void disp_A()
		{
			cout<<endl<<"Value of A="<<a;
		}
};

class B: public A
{
	int b,p;
	
	public:
		void set_B(int x,int y)
		{
			set_A(x);
			b=y;
		}
		
		void disp_B()
		{
			disp_A();
			cout<<endl<<"Value of B="<<b;
		}
		
		void cal_product()
		{
			p=a*b;
			cout<<endl<<"Product of "<<a<<" * "<<b<<" = "<<p;
		}
		
};

class Vehicle{
    public:
    void func(){
        cout<<"This is vehicle "<<endl;
    }
};

class Car: public Vehicle{

};

int main(){

    B _b;
	_b.set_B(4,5);
	_b.cal_product();
    cout<<endl;

    Car obj;
    obj.func();

    return 0;
}