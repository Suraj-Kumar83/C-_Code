#include <iostream>
using namespace std;
int main(){
    int n,pro=1;
    cout<<"Enter the number  :-"<<endl;
    cin>>n;

    while(n>0){
        pro =  pro * (n%10);
        n=n/10;
    }
    cout<<"The product of given number of digits is :-"<<pro<<endl;

    return 0;
}