#include<iostream>
using namespace std;
class Even
{
    public:
    Even()
    {
        cout<<"Even number exception";
    }
};

int main()
{
    int i;
    try
    {
      cout<<"Enter i";
      cin>>i;
      if(i/2!=0)
      throw Even();
      else
      cout<<i;
    }catch(Even ex)
    {
        cout<<"\n Exception caught";
    }
    return 0;
}
