#include<iostream>
using namespace std;
class pention
{
  private:
  int age;
  
  public:
  void getdata()
  {
      cout<<"Enter your age:";
      cin>>age;
  }
  
  void display()
  {
      cout<<age;
  }
  
  void check()
  {
      try
      {
        if(age >= 75)
        {
            cout<<"\n You are eligable for pention";
        }
        else 
        throw age;
      }catch(pention ex)
      {
          printf("\n Sorry! You are underage");
      }
  }
};

int main()
{
    pention p1;
    p1.getdata();
    p1.display();
    p1.check();
    return 0;
}
