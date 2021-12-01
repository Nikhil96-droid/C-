#include<iostream>
using namespace std;
class Student
{
    private:
    int rollno,DOB;
    string student_name,course;
    
    public:
    void getdata()
    {
        cout<<"Enter your roll number";
        cin>>rollno;
        cout<<"Enter your date of birth";
        cin>>DOB;
        cout<<"Enter your name";
        cin>>student_name;
        cout<<"Enter your course";
        cin>>course;
    }
    
    void show()
    {
        cout<<rollno<<endl;
        cout<<DOB<<endl;
        cout<<student_name<<endl;
        cout<<course<<endl;
    }
};


class Hostel:public Student
{
    private:
    int roomno;
    string mess,gym;
    
    public:
    void getname()
    {
        cout<<"Enter your room number";
        cin>>roomno;
        cout<<"Enter your mess name";
        cin>>mess;
        cout<<"Enter your gym name";
        cin>>gym;
    }
    
    void display()
    {
        cout<<roomno<<endl;
        cout<<mess<<endl;
        cout<<gym<<endl;
    }
};


int main()
{
    Hostel H1;
    H1.getdata();
    H1.show();
    H1.getname();
    H1.display();
    return 0;
} 
