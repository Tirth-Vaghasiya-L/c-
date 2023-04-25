#include<iostream>
using namespace std;

class demo
{
	private:
		int id;
		string name;
	public:
		~demo()
		{
			getdata();
			cout << " THE END " << endl;
		}
		void setdata()
		{
			cout << "Enter id :-";
			cin >> id;
			cout << "Enter name :-";
			cin >> name;
		}
		void getdata()
		{
			cout << " Id :-" << id << endl;
			cout << " Name :-" << name <<endl;
		}
};

int main()
{
	demo d;
	d.setdata();
}
