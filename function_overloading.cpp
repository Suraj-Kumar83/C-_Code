//Suppose we have two function with same name ,but is a difference in their types of arguments and number of arguments.
//This codition is called function overloading.
//Example:-

#include <iostream>
using namespace std;
class A {
    public:
    void sum(int x, int y){
        cout<<"\n sum of X and y is "<< x+y;
    }
};
class B {
    public:
    void sum (int x, int y, float z){
        cout<<"\n sum of x,y and z is "<< x+y+z;
    }
};
int main(){
    A aa; B bb;
    aa.sum(4,5);
    bb.sum(4,5,6);
    return 0;
}