#include <iostream>
using namespace std;
int main(){
    int n, org, reverse=0;
    cout<<"Enter the number :-"<<endl;
    cin>>n;
    org = n;
    while (n>0)
    {
        reverse=reverse*10+n%10;
        n=n/10;
        if (org==n)
        {
            cout<<"It is Palindrome number."<<endl;
        }else{
            cout<<"It is not palindrome number."<<endl;
        }
    
    }
    return 0;
}