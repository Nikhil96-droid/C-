#include<iostream>
using namespace std;
class Test 
{
    public:
    void sum(int x,int y,int z)
    {
        int tot;
        tot=x+y+z;
        cout<<"Total="<<tot<<endl;
    }
    void sum(int x, int y)
    {
        int tot;
         tot=x+y;
        cout<<"Total="<<tot<<endl;
    }
    void sum(double x, int y)
    {
        int tot;
         tot=x+y;
        cout<<"Total="<<tot<<endl;
    }
    void sum(int x, double y)
    {
        int tot;
         tot=x+y;
        cout<<"Total="<<tot<<endl;
    }
    
};
int main()
{
    Test t1;
    t1.sum(5,90,5);
    t1.sum(6,4);
    t1.sum(10.00,20);
    t1.sum(10,10.5);
    return 0;
}
