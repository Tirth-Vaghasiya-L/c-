#include<iostream>
using namespace std;

class demo
{
	private:
		int id;
		string name;
	public:
		demo(int id,string name)
		{
			this -> id = id;
			this -> name = name;
			setdata();
			getdata();
		}
		void setdata()
		{
			cout << "Enter id\t:-";
			cin >> id;
			cout << "Enter name\t:-";
			cin >> name;
		}
		void getdata()
		{
			cout << "Id\t:-" << id << endl;
			cout << "Name\t:-" << name <<endl;
		}
};

int main()
{
	int id;
	string name;
	demo d1(id,name);
}
