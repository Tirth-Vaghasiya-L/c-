#include<iostream>
using namespace std;

class mother
{
	public:
		void display()
		{
			cout << "I am mother" << endl;
		}
};

class daughter : public mother
{
	public:
		void display()
		{
			cout << "I am daughter" << endl;
		}
};

int main()
{
	daughter d;
	d.display();
	d.mother::display();
}
