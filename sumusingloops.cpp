#include <iostream>
using namespace std;
int main(){
    int i,n,sum;
    cout<<"Enter the number"<<endl;
    cin>>n;
    /*i=1;
    sum=0;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"sum is :- " << sum <<endl;*/


    sum=0;
    while (n>0)
    {
        sum= sum +  n%10;
        n=n/10;
    }
    cout<<"sum of digits is :-" << sum <<endl;
    
    return 0;
}

