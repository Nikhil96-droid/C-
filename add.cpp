#include<iostream>
using namespace std;
class Test 
{
    public:
    void sum(int x,int y,int z=0,int w=0)
    {
        int b;
        b=x+y+z+w;
        cout<<"Sum="<<b<<endl;
    }
};

int main()
{
    Test b1;
    b1.sum(5,10,15,20);
    b1.sum(6,12,2);
    b1.sum(5,4);
    return 0;
}
