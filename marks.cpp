#include<iostream>
using namespace std;
class Marks
{
    private:
    string na;
    float m1,m2,m3,tm;
    float percentage;
    char A,B,C;
    
    public:
    string name()
    {
        cout << "Enter your name:";
        cin>>na;
        return (na);
    }
    
    void getgrade()
    {
        cout<<"Enter your marks :";
        cin>>m1>>m2>>m3;
        tm=m1+m2+m3;
        cout<<tm<<endl;
        
        if(tm>=90)
        {
            cout<<"Your grade is 'A'";
        }
        else if(tm>=75 && tm<90)
        {
            cout<<"Your grade is 'B'";
        }
        else if(tm>=50 && tm<75)
        {
            cout<<"Your grade is 'C'";
        }
    }
    
    void pre()
    {
        percentage=(tm/3)*100;
       // return (percentage);
    }
};

int main()
{
    Marks s1;
    cout<<s1.name();
    s1.getgrade();
    s1.pre();
    return 0;
}
