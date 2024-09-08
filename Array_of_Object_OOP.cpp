#include <iostream>
using namespace std;
class arr
{
private:
    int a,b;
public:
    void getdata();
    void putdata();
};

void arr::getdata()
{
    cout<<"\n Enter two numbers: ";
    cin>>a>>b;
}

void arr ::putdata()
{
    cout<<"\n a =: "<<a<<"\t b =: "<<b;
}

int main(){
    arr aa[5];
    for (int i = 0; i <=5; i++){
    aa[i].getdata();
    };
    return 0;
}