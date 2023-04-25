#include<iostream>
using namespace std;

class x
{
	protected:
		int a;
		int b;
		int c; 
};

class y:public x
{
	public:
	void setdata()
	{
		cout << "Enter any number :-" << endl;
		cin >> a;
		cout << "Enter any number :-" << endl;
		cin >> b;
		cout << "Enter any number :-" << endl;
		cin >> c;
	}
	
	void getdata()
	{
		cout << "---------------------------" << endl;
		cout << " Sum of cube of this number = " << a*a*a+b*b*b+c*c*c << endl;
	}
};

int main()
{
	y y1;
	y1.setdata();
	y1.getdata();
}
