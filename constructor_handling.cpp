//constructor handling in inheritance is a way in which we can call different constructor ina derived class object. 
#include <iostream>
using namespace std;
class A
{
protected:
    int a;
public:
    A(int x){
    a = x;
}
    void display(){
    cout<<"\n A ="<<a;
    }
};
class B
{
protected:
    int b;

public:
    B(int y)
    {
        b = y;
    }
    void putdata()
    {
        cout << "\n B =" << b;
    }
};
class C: public A, public B
{
protected:
    int c;
public:
    C (int p,int q, int r): A(p) , B(q) {
        c = r;
    }
    void show(){
        cout<<"\n C = "<<c;
    }
};

int main(){
    C aa(10,20,30);
    aa.display();
    aa.putdata();
    aa.show();
    return 0;
}