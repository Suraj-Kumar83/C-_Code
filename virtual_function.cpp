//virtual is keyword in C++.
//It is redefined in the derived class.
//When a virtual function is defined in base class then the pointer to base class is created. Nowon the basis of  object assigned to 
//respective class function is called.

#include <iostream>
using namespace std;
class A {
    public:
    virtual void show(){
        cout<<"\n Base class";
    }
};
class B :public A
{    public:
    void show(){
        cout<<"\n Derived class ";
    }
};
int main(){
    A *bptr;
    B aa;
    bptr= &aa;
    bptr->show();
    return 0;
}