#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Entert the value of n"<<endl;
    cin>>n;
    /*int n=10;
    int a=0;
    int b= 1;
    cout<<a <<"  "<<b<<"   ";
    for (int i = 0; i < n; i++)
    {
            int nextno= a+b;
            cout<<nextno<<"    ";
            a=b;
            b=nextno;

    }*/
    for (int i = 2; i < n; i++)
    {
        if(n%2==0){
        cout<<"Not a Prime";
        break;}

        else{
            cout<<"Prime";
            break;
        }
        
        
        

    }
    
    return 0;
}