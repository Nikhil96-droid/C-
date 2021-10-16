#include<iostream>
using namespace std;
class Ractangle
{
    private:
    float l,b;  
    
    public:
    float area()
    {
        return (l*b);
    }
    
    void getdata()
    {
        cout<<"Ente the value of l,b";
        cin>>l>>b;
    }
};
int main()
{
    Ractangle r1;
    Ractangle r2;
    Ractangle r3;
    
    r1.getdata();
    r2.getdata();
    r3.getdata();
    
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    cout<<r3.area()<<endl;
    
    return 0;
}
