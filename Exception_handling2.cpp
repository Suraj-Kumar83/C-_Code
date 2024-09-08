// Exception handling can be perform by four steps:-
// 1.Hit our exception.
// 2.Throw ourexception.
// 3.catch our exception.
// 4.perform the correct action.
//To perform the above task there exist some action to be perform i.e. :-1. Try ():---> It contain the code in which we put the code that might contain exception.
                                                                    // 2. Catch()--->whenever some exception is found in try block,it is immadeatly through to catch() block.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "\n Enter two numbers :-";
    cin >> a >> b;
    try
    {
        if(b!=0){
        c = a / b; // It gives runtime error when we give the input the value 0.
        cout << "\n Division is :-" << c;
        }else{
        throw(b);
        }
    }
    catch (int b){
        cout<<"Divide by "<<b<< "error";
    }
    return 0;
}