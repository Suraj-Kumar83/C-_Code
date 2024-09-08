#include <iostream>
using namespace std;
int main(){
    int n ,fact;
    cout<<"enter the number :-"<<endl;
    cin>>n;
    fact=1;
    while (n>=1)
    {
        fact=fact*n;
        n=n-1;
    }
    cout<<"the factorial of number :- "<<fact<<endl;

    return 0;
}