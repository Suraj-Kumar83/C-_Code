//Parameterised constructor are those constructor which takes arguments.
#include <iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int m,int n){
        a=m;
        b=n;
    }
    void putdata()
    {
        cout << "\n a = " << a << "\t b =" << b;
    }

};
int main(){
    demo aa(3,5);
    aa.putdata();
    return 0;
}