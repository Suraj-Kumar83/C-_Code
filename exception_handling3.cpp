#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"\n Enter the value ";
    cin>>x;
    try{
        if (x==0)
        throw(x);      //This  case is called multiple catch() statement.
        if (x==100)    //Alternative of this is :-Single catch() statement and multiple exceptions.for this intilization is like catch(...){
            throw("E"); // cout<<"some error happend." };
        if (x == 1000)
        throw(5.5);
    }
    catch (int x){
        cout<<"\n value of x is zero "<<x;
    }
    catch (char x)
    {
        cout << "\n value of x is char" << x;
    }
    catch (float x)
    {
        cout << "\n value of x is float" << x;
    }
    return 0;
}