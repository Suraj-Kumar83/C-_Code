/*Built-in datatypes are initilised easily example int=5;  but User-defined datatypes are not intilised by any value..Example :- Class and objects.
Then we use the constructors to initilised the built-in datatypes.
Constructors :- It is a special member function which is used to initilised the value of a variable inside object.
The major point about Constructors:-
1.Constructors name is same as class name.
2. It is automatically/implicitly invoked as soon as object of its class is created.
3. It have no return type not even void type.
4.It allows default argument concept.
5.It is not basically inherit.
6.It is always define inside public section.
7.It is cannot be virtual.

There are mainly three types of constructor :-
1.Paramaterised constructors
2.Default constructors
3.Copy constructors*/

//Explanation:-
//Default Constructor:-It have no arguments.

#include <iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo (){
        a=10;
        b=20;
    }
    void putdata(){
        cout<<"\n a = "<<a<<"\t b ="<<b;
    }
};
int main(){
    demo aa;
    aa.putdata();
    return 0;
}
