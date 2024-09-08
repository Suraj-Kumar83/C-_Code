/*There are mainly three types of control statement.
1 :-Selection control statement:- If, Else ,Switch.
2 :-Jump control statement:- Goto,Break, Continue.
3 :-looping control statement:- For,do,do while loop.

<-------  In this lecture I mainly learn about Jump Statement.------->
Break keyword:- It mainly terminate the block of the any scope.*/
//Example:-




// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     x=1;
//     while(x<=10){
//         cout<<x<<endl;
//         if(x==5)
//         break;
//         x++;
//     }
//     return 0;
// }




//Continue Keyword:- It terminate only that iteration i.e. have given the condition.
// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     x=0;
//     while(x<=10){
//     x++;
//     if(x==5)
//     continue;
//     cout << x << endl;
//     };
//     return 0;
// };




//Goto keyword:- It is basically used the jump the statement i.e. used to transfer the flow of a program. It create lebel of that program.


#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : "<<endl;
    cin>>a;
    if (a%2==0)
        goto even;
    else
        goto odd;
        
    even:
        cout<<"The number is even. "<<endl;
        return 0;
    odd:
        cout << "The number is odd. " << endl;
        return 0;
    
}