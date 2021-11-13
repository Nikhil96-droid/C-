#include<iostream>
using namespace std;
class time1
{
    int hr,min,sec;
    public:
    void get()
    {
        cout<<"Enter hours ";
        cin>>hr;
         cout<<"Enter minutes ";
        cin>>min;
         cout<<"Enter seconds ";
        cin>>sec;
    }
    
    void disp()
    {
        cout<<hr<<":"<<min<<":"<<sec;
    }
    void sum(time1 & ,time1 &);
};

    void time1 :: sum(time1 &t1,time1 &t2)
    {
        sec=t1.sec+t2.sec;
        min=sec/60;
        sec=sec%60;
        min=t1.min+t2.min+min;
        hr=min/60;
        min=min%60;
        hr=hr+t1.hr+t2.hr;
    }
    
int main()
{
    time1 t1,t2,t3;
    t1.get();
    t1.disp();
    t2.get();
    t2.disp();
    t3.sum(t1,t2);
    t3.disp();
    return 0;
}
