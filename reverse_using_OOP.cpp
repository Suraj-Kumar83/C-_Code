#include <iostream>
using namespace std;
class reverse{
    int n;
    public:
    void getdata();
    void putdata();
};
void reverse::getdata(){
    cout<<"Enter the number :-"<<endl;
    cin>>n;
}
void reverse::putdata(){
    int rev=0;
    while (n>0)
    {
        rev= (rev*10)+n%10;
        n=n/10; 
    }
    cout<<"\n Reverse number is :-"<<rev;
}
int main(){
    reverse aa;
    aa.getdata();
    aa.putdata();
    return 0;
}