#include <iostream>
using namespace std;
int main(){
    //What is pointer?---->is a datatype which holds the address of other data type.
    int a = 3;
    int* b=&a;
     //&-->Address ofoperator
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The address of a is"<<b<<endl;
     //*-->Dereference operator.
    cout<<"The value at address b is"<<*b<<endl;
    // pointer to pointer
    int** c = &b;
    cout<<"the address of b is " <<&b<<endl;
    cout<<"the address of bis " <<c<<endl;
    cout<<"the value at address of c is " <<*c<<endl;
    cout<<"the  value at address value_at(value at (c))  is " <<**c<<endl;


    return 0;
}