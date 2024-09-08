//Destructor is used to destroy the object once the object is out of scope. Its name is same as the class name preceed by tilde sign(~).
#include <iostream>
using namespace std;
int count = 0;
class demo{
public:
demo(){
    count++;
    cout<<"\n No.of object created "<<count;
}
    ~demo (){
        count--;
        cout<<"\n No.of object destroyed "<<count;
    }
};

int main(){
    demo aa,bb,cc;
    {demo dd;
    }
    return 0;
}