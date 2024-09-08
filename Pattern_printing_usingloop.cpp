#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the value of rows "<<endl;
    cin>>n;
    //i=1;
    // while (i<=n)
    // {
    //     j=1;
    //     while (j<=i)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
        
    // }





    // i=1;
    // while(i<=n){
    //    int b=1;
    //     while (b<n-i)
    //     {
    //         cout<<" ";
    //         b++;
    //     }
    //     j=1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }



i=1;
while(i<=n){
    int b = 1;
    while(b<n-i){
        cout<<" ";
        b++;
    }
    j=1;
    while (j<=2*i-1)
    {
        cout<<"*" ;
        j++;
    }
    cout<<endl;
    i++;
    
}


    return 0;
}