#include <iostream>
using namespace std;
class Time
{
private:
    int h,m;
public:
    void getdata();
    void putdata();
    void sum(Time t1,Time t2);
};

void Time::getdata()
{
    cout<<"\n Enter the value of hours and min. "<<endl;
    cin>>h>>m;
}

void Time::putdata()
{
    cout<<"\n hours = "<<h<<"\t Minutes = "<<m;
}
void Time::sum( Time t1, Time t2){
    h = (t1.m+t2.m)/60;
    m = (t1.m+t2.m)%60;
    h = h + (t1.h+t2.h);
}

    int main()
{
    Time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.sum(t1,t2);
    t1.putdata();
    t2.putdata();
    t3.putdata();

    return 0;
}