// Friend function :- Generally we see that any object of any class can access the private specifier of any class.
//But there is function which are not define in any particular class but it can be access by using the "Friend function".

#include <iostream>
using namespace std;

class demo
{
private:
    int a,b;
public:
    void getdata();
    friend int sum(demo);
};
    void demo:: getdata(){
    cout<<"\n Enter two number :-";
    cin>>a>>b;
}
int sum(demo aa){
    return (aa.a+aa.b);
    }


int main(){
    demo aa;
    aa.getdata();
    cout<<"Addition :-"<<sum(aa);
    return 0;
}