#include<iostream>
using namespace std;
class Data
{
    int a,b;
    
    public:
    Data()
    {
        a=100;
        b=200;
    }
    
    Data(int x,int y)
    {
        a=x;
        b=y;
    }
    
    Data(const Data&d)
    {
        a=d.a;
        b=d.b;
    }
    
    void show()
    {
        cout<<a<<""<<b<<""<<endl;
    }
};

int main()
{
    Data d1;
    d1.show();
    Data d2(10,20);
    d2.show();
    Data d3(d2);
    d3.show();
    return 0;
}
