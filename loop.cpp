#include<iostream>
using namespace std;
int main(){
    /*There are three types of loop sin C++:
    1.For loop
    2.While loop
    3.Do while loop*/
// ***********************Foor loop**************
//Syntax of for loop
//for(intilization;condition;updation)
//{
//  loop body()
//}
//It works when continuous repeatative work can be done. It works until the condition are not false. 
int i =10;
    cout<<"The number between 0 and 40 are as follows:"<<endl;
    for (int  i = 10; i <= 40; i++)
    {
    cout<< i<<endl;
    
    }
//while loop:it terminate  if the condition may be false.
    while (i<=5)
    {
        cout<<i<<endl;
        i++;
    }
    //do while loop.: it execute at least one time if the condition may be false.
    /*int i;
    do
    {
        cout<<i<<endl;
    } 
    while (i<=40);
    */
    
    return 0;
    
}