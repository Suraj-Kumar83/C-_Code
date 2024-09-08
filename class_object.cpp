/*Class :- It is a combination of data member(variable) and member function(function).
It is always define before the main function.
Object:- It is instance of class.

Access Specifier:- It define the scope of any data member.there are basically the Specifier:-
1. Private
2.Public
3. Protected */

#include <iostream>
using namespace std;

class addition{
    //private:                                 ------------> Either we can write the private or if we don't want we can't write.
    int a,b;
    public:
    void getdata(){                            //It can also define outside the class by using the :: (scope resolution operator).
        cout << "Enter two number :" << endl;  // For example :-void addition::getdata(){ };
        cin >> a >> b; 
    }
    void putdata(){
        cout<<"Addition of a and b are : "<<a+b<<endl;
    }
};
int main()
{
addition aa;
aa.getdata();
aa.putdata();
return 0;
}