//In this type of inheritance more than one  base class is being inherit by single derived class.
#include <iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void input(){
        cout<<"\n Enter the number :";
        cin>>a;
    }

};
class B
{
protected:
    int b;

public:
    void getdata()
    {
        cout << "\n Enter the number :";
        cin >> b;
    }
};
class C: public A,public B
{
public:
    void putdata()
    {
        cout << "\n Addition :"<<a+b;
    }
};

int main(){
    C aa;
    aa.input();
    aa.getdata();
    aa.putdata();
    
    return 0;
}