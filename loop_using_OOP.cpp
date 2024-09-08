#include <iostream>
using namespace std;
//class onetoten{
//     public:
//     void putdata(){
        
//         for (int i = 1; i <=10; i++)
//         {
//             cout<<i<<endl;        
//         }
        
//     }
// };
// int main(){
//     onetoten aa;
//     aa.putdata();
//     return 0;
//}

class ntoone{
    int n;
    public:
    void getdata();
    void putdata();
};
void ntoone::getdata(){
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    }
void ntoone::putdata()
{
    for (int i = n; i >= 1; i--)
    {
        cout << i << endl;
    }
}
int main(){
    ntoone aa;
    aa.getdata();
    aa.putdata(); 
    return 0;
}