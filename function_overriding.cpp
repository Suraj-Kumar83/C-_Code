//Suppose we have two classes ,one is base class and and another is derived class,it inherit the base class publically and both class have 
//same function ,so in this case if we call the function it only call the function/methods of derived class.It not call the function of 
//base class,this case is called function/method overriding.
//For example:-

#include <iostream>
using namespace std;
class A {
    public:
    void display(){
        cout<<"\n It is Base class";
    }
};

class B :public A
{
public:
    void display()
    {
        cout << "\n It is Derived class";   //This function overridding the function of base class because obbect of class B search the function call first in their own scope.
    }
};
    int main()
{ 
    B aa;
    aa.display();

    return 0;
}