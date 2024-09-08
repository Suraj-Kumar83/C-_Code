#include <iostream>
using namespace std;
int main(){
    int n, reverse=0;
    cout<<"Enter the number"<<endl;
    cin>>n;

    while (n>0)
    {
        reverse=(reverse*10)+n%10;
        n=n/10;
    }
    cout<<"the reverse digit is :-"<<reverse<<endl;

    return 0;
}