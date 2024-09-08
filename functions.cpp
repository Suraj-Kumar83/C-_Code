#include <iostream>
using namespace std;
//function prototype
//type function-name (arguments)
//call by value
int sum( int a,int b){
    int c = a+b;
    return c;
}
//call by reference by pointer.
int swapPointer(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b= temp;

}
int main(){

    int x, y;
    cout<<"Enter the first number"<<endl;
    cin>>x;
    cout<<"Enter the second number"<<endl;
    cin>>y;
    cout<<"The sum is "<<sum(x,y); 
    int a=10, b=12;
    cout<<"The value of a is"<<a<<"and the value of b is "<<b<<endl; 
    swap(a,b);
    cout<<"The value of a is"<<a<<"and the value of b is "<<b<<endl; 
    return 0;
}