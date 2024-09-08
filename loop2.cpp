#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int sum=0;
    for (int  i = 0; i <=n; i=i+2)
    {
        sum =sum+i;
        
    }
    cout<<"the value of sum is: "<<sum<<endl;
    
    return 0;
}