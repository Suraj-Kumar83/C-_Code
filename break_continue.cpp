#include <iostream>
using namespace std;
int main(){
    //break:- it stop the iteration as per given codition.
    for (int  i = 0; i <10 ; i++)
    {
        
        if(i==9){
            break;
        }
        cout<<i<<endl;
    }
    //continue:-It break the iteration as per given condition and continue after that.
    for (int  i = 0; i <10 ; i++)
    {
        
        if(i==2){
            continue;;
        }
        cout<<i<<endl;
    }
    
    return 0;
}