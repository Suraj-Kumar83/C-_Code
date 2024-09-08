#include <iostream>
using namespace std;
class oddeven{
    int a;
    public:
    void getdata();
    void putdata();
};
void oddeven::getdata(){
    cout<<"Enter the number :"<<endl;
    cin>>a;
}
void oddeven::putdata(){
    if (a%2==0)
    {
        cout<<"Even number."<<endl;
    }else{
        cout<<"Odd number."<<endl;
    }
    
}

    int main()
{
    oddeven aa;
    aa.getdata();
    aa.putdata();
    return 0;
}