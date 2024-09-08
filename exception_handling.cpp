//When we genareiiy write code we  have some error that are called bugs or error.
//Error are mainly two types :-
// 1.Logical error:- It is not caught by the compiler.
// 2.Semantic error:-This error is generated when we write wrong syntax.

// Then after when we run our code it will compile without cause any error (its may be logical as well as symantic).
// Then after it automatically terminated before completion of task and it is called run-time error. 
// Exception are the some unpredictable circumstance which are sudeenly terminated with some errors/issues.
//Run-time error is also called Exception.
//Exception handling provide the facility that handle the exception so that our program keep running.

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"\n Enter two numbers :-";
    cin>>a>>b;
    c=a/b;   //It gives runtime error when we give the input the value 0.
    cout<<"\n Division is :-"<<c;
    return 0;
}