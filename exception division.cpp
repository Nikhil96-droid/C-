#include<iostream>
using namespace std;
class Mid
{
  public:
  double divide(int a,int b)
  {
      if(b==0)
      {
          throw b;
      }
      return (a/b);
  }
};

int main()
{
    int x,y;
    double z;
    cout<<"\n Enter two number:";
    cin>>x>>y;
    try
    {
        Mid m1;
        z=m1.divide(x,y);
        cout<<z;
    }
    catch (int x)
    {
        cout<<"\n Division by error";
    }
    return 0;
}
