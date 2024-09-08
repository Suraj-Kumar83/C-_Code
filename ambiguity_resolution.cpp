//Ambiguity means error, it mean that when we call the any funcion in derived class but it is preset in base class with same dfunction 
// name then it cause ambiguity.  
//:-The solution of this ambiguity is done by below given example:-

#include <iostream>
using namespace std;
class A {
    protected:
    int a;
    public:
    void input(){
        cout<<"\n Enter the value of a :-";
        cin>>a;
    }
    void show(){
        cout<<"\n The value of a is "<<a;
    }
};
class B
{
protected:
    int b;

public:
    void input()
    {
        cout << "\n Enter the value of b :-";
        cin >> b;
    }
    void output()
    {
        cout << "\n The value of b is "<<b;
    }
};
class C :public A, public B
{
    private:
    int c;

public:
    void input()
    {
        cout << "\n Enter the value of c:-";
        cin >> c;
        A::input(); B::input();  //-----> This is the solution to remove ambiguity from our code.
    }
    void display()
    {
        cout << "\n The value of c is "<<c;
    }
};

int main(){
    C aa;
    aa.input();
    aa.display();
    aa.output();
    aa.show();
    
    return 0;
}