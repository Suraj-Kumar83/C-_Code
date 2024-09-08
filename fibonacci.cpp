#include <iostream>
using namespace std;
int main(){
    int n,fib=0,fib1=0,fib2=1;;
    cout<<"Enter the number :-"<<endl;
    cin>>n;
    
    while (fib<=n)
    {
        
        fib=fib1+fib2;
        cout<<fib<<endl;
        fib1=fib;
        fib2=fib1;

    }
    
    return 0;
}