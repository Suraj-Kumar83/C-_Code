//In this type of inheritance in which one super class/base class is derived by a child class and
// this class is further inherit by another child class and so on.

#include <iostream>
using namespace std;
class A{
    int roll;
    public:
    void getroll(){
        cout<<"\n Enter the Roll number :";
        cin>>roll;
    }
    void putroll(){
        cout<<"\n Roll number is : "<<roll;
    }
};
class B :public A
{
    protected:
    int sub1,sub2;

public:
    void getmarks()
    {
        cout << "\n Enter the marks of subject1 and subject2 :";
        cin >> sub1>>sub2;
    }
    void putmarks()
    {
        cout << "\n Marks1 is : " << sub1;
        cout << "\n Marks2 is : " << sub2;
    }
};

class C :public B{
    int sptm;
    public:
    void getsptm(){
        cout<<"\nEnter the sport marks";
        cin>>sptm;
        }
        void total(){
            putroll();
            putmarks();
            cout<<"\n Total marks : "<<sub1+sub2+sptm;;
        }
};
int main(){
    C aa;
    aa.getroll();
    aa.getmarks();
    aa.getsptm();
    aa.total();
    return 0;
}