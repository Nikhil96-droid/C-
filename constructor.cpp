#include<iostream>
using namespace std;
class Add
{
    private:
    int a,b;
    
    public:
    int sum()
    {
        return(a+b);
    }
    
    Add()
    {
        a=50;
        b=100;
    }
    
    Add(int x,int y)
    {
        a=x;
        b=y;
    }
    
   
};

int main()
{
    Add a1,a2;
    cout<<a1.sum()<<endl;
    cout<<a2.sum()<<endl;
    
    return 0;
}
