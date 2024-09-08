//When one base is inherited by multiple derived class.
#include <iostream>
using namespace std;
class A
{
    public:void message(){
        cout<<"\n Welcome to inheritance .";
    }
};
class B :public A{
    public :
    void display(){
        cout<<"\n Inside class B.";
    }
};
class C: public A
{
public:
    void putdata()
    {
        cout << "\n Inside class C.";
    }
};
int main(){
    B aa;
    C bb;
    aa.display();
    aa.message();
    bb.putdata();
    bb.message();
    
    return 0;
}