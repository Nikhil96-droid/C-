#include<iostream>
using namespace std;
class Mid
{
  public:
  int number(int a)
  {
      if(a<0)
      {
          throw a;
      }
      return (a);
  }
};

int main()
{
    int x;
    int z;
    cout<<"\n Enter any number:";
    cin>>x;
    try
    {
        Mid m1;
        z=m1.number(x);
        cout<<z;
    }
    catch (int x)
    {
        cout<<"\n Negative by error";
    }
    return 0;
}
