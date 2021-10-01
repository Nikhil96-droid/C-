#include <iostream>

using namespace std;

int main()
{
   int age;
   cout<<"Enter your age";
   cin>>age;
   
   if(age>=18)
   {
       cout<<"You are elgable to cast a vote"<<endl;
      
   }
   else 
   {
       cout<<"You are under age"<<endl;
   }
   return 0;
}

