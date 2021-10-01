#include <iostream>

using namespace std;

int main()
{
   int weekday;
   cout<<"Enter the day number 1 to 7";
   cin>>weekday;
   
   switch(weekday)
   {
        case 1:
       cout<<"Day is Monday"<<endl;
       break;
       
        case 2:
       cout<<"Day is Tuesday"<<endl;
       break;
       
        case 3:
       cout<<"Day is Wednesday"<<endl;
       break;
       
        case 4:
       cout<<"Day is Thursday"<<endl;
       break;
       
        case 5:
       cout<<"Day is Friday"<<endl;
       break;
       
        case 6:
       cout<<"Day is Saturday"<<endl;
       break;
       
        case 7:
       cout<<"Day is Sunday"<<endl;
       break;
       
       default :
       cout<<"Please enter a valid number between 1 to 7"<<endl;
       break;
   }
   return 0;
}

