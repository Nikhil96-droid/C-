#include<iostream>
using namespace std;
class Mid
{
  public:
  int age(int a)
  {
      if(a<18)
      {
          throw a;
      }
      cout<<"\n Your are eligible for casting vote"<<endl;
      return (a);
  }
};

int main()
{
    int x;
    int z;
    cout<<"\n Enter your age:";
    cin>>x;
    try
    {
        Mid m1;
        z=m1.age(x);
        cout<<z;
    }
    catch (int x)
    {
        cout<<"\n Underage by error";
    }
    return 0;
}
