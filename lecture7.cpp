#include<iostream>
using namespace std ;
int main()
{
    int num ;
    cout<<"Enter the number of students in the Class"<<endl;
    cin>>num;
    //if (num < 40){
    //cout<<"Teachers not take our class today:"<<endl;
    //}
    //else if (num==40){
    //cout<<"Teachers will take our class today:"<<endl;}
    //else{
    //    cout<<" Attend the class"<<endl;
    //}
    switch (num)
    {
    case 40:
    cout<< "Class will be held"<<endl; 
        break;
    case 35:
    {
        cout<<"Class will not held"<<endl;
        break;
    }
    default:
    cout<<"Absolute number of student not present in the class"<<endl;
        break;
    }

    return 0; 
}