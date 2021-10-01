#include <iostream>

using namespace std;

int main()
{
  int num1,num2,num3;
  cout<<"Enter any three number";
  cin>>num1>>num2>>num3;
  
  if(num1>num2 && num1>num3)
  {
      cout<<num1<<endl;
  }
  if(num2>num1 && num2>num3)
  {
      cout<<num2 <<endl;
  }
  if(num3>num1 && num3>num2)
  {
      cout<<num3 <<endl;
  }
  return 0;
}
