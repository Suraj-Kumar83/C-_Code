//When we combine the concept of two or more basic inheritance type (single,multiple,multilevel,hierarchy inheritance.) 

#include <iostream>
using namespace std;
class A{
    public:
    void putdata(){
        cout<<"\n Inside Class A";
    }
};
class B :public A
{
public:
    void display()
    {
        cout << "\n Inside Class B";
    }
};
class C
{
public:
    void message()
    {
        cout << "\n Inside Class C";
    }
};
class D :public B,public C
{
public:
    void print()
    {
        cout << "\n Inside Class D";
    }
};
int main(){
    D dd;
    dd.print();
    dd.display();
    dd.message();
    dd.putdata();
    
    return 0;
}