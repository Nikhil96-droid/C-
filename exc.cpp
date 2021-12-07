#include<iostream>
using namespace std;
class Check
{
    private:
    int a;
    
    public:
    void getdata()
    {
        cout<<"Enter the value of a:";
        cin>>a;
    }
    
    void chk()
    {
        try
        {
            cout<<a;
            if(a<0)
            throw a;
            
            else
            cout<<"\n The number is"<<a;
        }catch(Check exce)
        {
            cout<<"Enter only positive number,you entered negative at this time";
        }
    }
    
    
};

int main()
{
    Check c1;
    c1.getdata();
    c1.chk();
    return 0;
}

