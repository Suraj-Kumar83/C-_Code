/*Inheritance is a imortant concept in OOP.It provide the reusebility of pre existing code to new project.
Types of inheritance :-
1.single inheritance 
2.Multiple inheritance
3.Multi-level inheritance
4.Hybrid Inheritance
5.Hierarchical inheritance.



1. Single Inheritance :- The type  of inheritance in which one base class is derived by a single sub-class.
Example:-*/

#include <iostream>
using namespace std;
class A {
    int x;
    public:
    void input(){
        cout<<"\n Enter the number:-";
        cin>>x;
    }
    int getx(){
        return x;
    }
};
class B:public A
{
    int y;

public:
    void getdata()
    {
        cout << "\n Enter the number:-";
        cin >> y;
    }
    void putdata(){
        cout<<"\n Addition :- "<<getx()+y;
    }
};

int main(){
    B aa;
    aa.input();
    aa.getdata();
    aa.putdata();
    return 0;
}