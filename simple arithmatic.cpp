#include <iostream>

using namespace std;

int main()
{
   int num1,num2,sum;
   char oper;
   cout<<"Enter any two number";
   cin>>num1>>num2;
   
   cout<<"Enter any operator";
   cin>>oper;
   
   switch(oper)
   {
       case '+':
       sum=num1+num2;
       cout<<sum<<endl;
       break;
       
       
       case '-':
       sum=num1-num2;
       cout<<sum<<endl;
       break;
       
       
       case '*':
       sum=num1*num2;
       cout<<sum<<endl;
       break;
       
       
       case '/':
       sum=num1/num2;
       cout<<sum<<endl;
       break;
       
       default :
       cout<<"You entered wrong operator";
       break;
   }
   
   return 0;
}

