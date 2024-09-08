//Array is a collection of similar datatypes .
//Array is contiguous memeory locations.
#include <iostream>
using namespace std;
int main(){
    int  marks[]= {23, 45,56,67,78};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    int mathsmarks[5];
    mathsmarks[0]=908;
    mathsmarks[1]=876;
    mathsmarks[2]=890;
    mathsmarks[3]=290;
    mathsmarks[4]=678;
    mathsmarks[5]=2343;
    cout<<"these are maths marks:" <<endl;
    cout<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;
    cout<<mathsmarks[4]<<endl;
    cout<<mathsmarks[5]<<endl;
    //using for  loops
    for (  int i = 0; i < 5; i++)
    {
        cout<<"THe value of marks "<<i<< "is"  <<mathsmarks[i]<< endl;
    }
    //pointers and arrays
    int* p= marks;
    cout<<"The value pf marks[0] is  "<<*p<<endl;
    cout<<"The value pf marks[1] is  "<<*(p+1)<<endl;
    cout<<"The value pf marks[2] is  "<<*(p+2)<<endl;
    cout<<"The value pf marks[3] is  "<<*(p+3)<<endl;
    cout<<"The value pf marks[4] is  "<<*(p+4)<<endl;
         
    
    


    return 0;
}