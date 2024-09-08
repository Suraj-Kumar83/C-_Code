#include <iostream>
using namespace std;
typedef struct employee
//Sturcture
    {
        int empId;
        char favChar;
        float salary;
    }ep;
    //Union
    union money
    {
        int rice;
        char car;
        float pounds;
    };
    
int main(){
    //enum used.
    enum Meal{breakfast, lunch, dinner};
    Meal m2=lunch;
    cout<<(m2==2)<<endl;
    cout<<(m2==1)<<endl;

    
   //structure and Union
    ep suraj;
    union money m1;
    m1.rice = 56;
    m1.car = 'c';
    cout<<m1.rice <<endl;
    cout<<m1.car<<endl;
    suraj.empId =12;
    suraj.favChar ='A';
    suraj.salary =1500000000;
    cout<<suraj.salary;
    
    return 0;
}


//Structure contain the all memory allocated to the datatypes  that is used in the code; 
//While union use only largest memory allocated to the datatypes in the code.
//union cosume less memory than structure.