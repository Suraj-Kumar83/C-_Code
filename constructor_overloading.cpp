//In C++ we can incorporate more than one constructor which different types of argument and diferent number of argument,this is called constructor overloading.
//code:- 
#include <iostream>
using namespace std;
class demo 
{
private:
    int a;
public:
    demo (){
        a =10;
    }
    demo (int x){
        a=x;
    }
    demo (demo &z){
        a=z.a;
    }

void putdata(){
    cout<<"\n A = "<<a;
}
};


int main(){
    demo aa;
    demo bb(20);
    demo cc(aa);
    aa.putdata();
    bb.putdata();
    cc.putdata();
    
    return 0;
}