#include<iostream>
using namespace std;

class data
{
	protected:
		int number;
	public:
		void setdata()
		{
			cout << "Enter number :- ";
			cin >> number;
		}
};

class square : public data
{
	public:
		void getdata()
		{
			cout << endl << "Square of " << number << " = " << number * number;
		}
};

class cube : public data
{
	public:
		void getdata()
		{
			cout << endl << "Cube of " << number << " = " << number * number * number;
		}
};

int main()
{
	square s;
	cube c;
	s.setdata();
	c.setdata();
	
	s.getdata();
	c.getdata();
}
