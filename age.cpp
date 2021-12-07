#include<iostream>
using namespace std;
class age
{
    public:
    age()
    {
        cout<<"Under age exception";
    }
};

int main()
{
    int i;
    try
    {
      cout<<"Enter i";
      cin>>i;
      if(i<18)
      throw age();
      else
      cout<<i;
      cout<<"\n You are able to cast a vote";
    }catch(age ex)
    {
        cout<<"\n Exception caught";
    }
    return 0;
}
