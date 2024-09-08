//Recursion is that a function call itself until their condition are not false.
#include <iostream>
using namespace std;
//int factorial(int n){
  //  if (n<=1){
    //    return 1;
    //}
  //  return n *factorial(n-1);
//}
int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2) +fib(n-1);
}

int main(){
   /* //factorial of a number
    //0!= 1 -->by definition
    //1! =1 ---> by definition
    //n!=n * (n-1)!---> by definition
int n;
cout<<"enter the value of n :"<<endl;
cin>>n;
cout<<"The factorial of" <<n<<" is :"<<factorial(n)<<endl;*/

//fibonacci sequence:- sum of previous term.
int a;
cout<<"Enter the value of a :"<<endl; 
cin>>a;
cout<<"The fibonacci sequence of "<<a<<"is :"<<fib(a)<<endl;  
    return 0;
}