//Reference variables
#include<iostream>
using namespace std;
int main(){
float x = 568;
float &y = x;
cout<<x<<endl;
cout<<y<<endl;
/* Type casting */
int a = 67;
cout<<"The value of a is"<<(float)a<<endl;
cout<<"The value of a is"<<float(a)<<endl;

float b =23.76;
cout<<"The value of b is" <<(float)b <<endl;
cout<<"The value of b is" << double(b)<<endl;
cout<<"The value of b is" <<(int)b<<endl;
return 0;
}
