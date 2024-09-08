//Copy Constructors :- It initialize the variable of an object with the value of variables pf another object of same type.
#include <iostream>
using namespace std;
class demo{
    int a;
    public:
    demo(){
        a=10;
    }
    demo(demo &z){  // It is called as a references.
        a=z.a;
    }
    void putdata(){
        cout<<"\n A = "<<a;
    }
};
int main(){
    demo aa;
    demo bb(aa);
    demo cc = bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();

    return 0;
}