#include<iostream>
using namespace std;
class Cricle
{
    private:
    float r;  
    
    public:
    float area()
    {
        return (r*r*3.14);
    }
    
    void getdata()
    {
        cout<<"Ente the value of r";
        cin>>r;
    }
};
int main()
{
    Cricle c1;
    Cricle c2;
    Cricle c3;
    
    c1.getdata();
    c2.getdata();
    c3.getdata();
    
    cout<<c1.area()<<endl;
    cout<<c2.area()<<endl;
    cout<<c3.area()<<endl;
    
    return 0;
}
