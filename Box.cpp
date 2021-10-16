
#include<iostream>
using namespace std;
class Box
{
	private:
	float w,h,d;
		
	public:
	float vol()
	{
		return (w*h*d);
	}	
	
	void getdata()
	{
		cout<<"Enter the value of w,h,d";
		cin>>w>>h>>d;
	}
};

int main()
{
	Box b1;
	Box b2;
	Box b3;
	
	b1.getdata();
	b2.getdata();
	b3.getdata();
	
	cout<<b1.vol()<<endl;
	cout<<b2.vol()<<endl;
	cout<<b3.vol()<<endl;
	
	return 0;
}
