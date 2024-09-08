#include <iostream>
using namespace std;
int main(){
    int x,y, num=1;
    cout<<"Enter the value of X and Y :-"<<endl;
    cin>>x>>y;
    for (int i =1 ; i <=y; i++)
    {
        num = num * x;
    };
    // i=1       ----------> It is use in While loop.
    // while(i<=y){
    // num=num*x;
    // i=i+1;
    // }
    // cout << "Final value :- " << num << endl;

    cout << "Final value :- " << num << endl;


    return 0;
}