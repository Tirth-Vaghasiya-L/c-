#include<iostream>
using namespace std;

class animal
{
	protected:
		int age;
		string name;
	public:
		void set_value()
		{
			cout << "Enter name :- ";
			cin >> name;
			cout << "Enter age :- ";
			cin >> age;
		}
};

class zebra : public animal
{
	public:
		void get_value()
		{
			cout << endl << "Name of zebra :- " << name << endl;
			cout << "Age of zebra :- " << age << endl;
			cout << "Place of origin :- Jungle"<< endl;
		}
};

class dolphin : public animal
{
	public:
		void get_value()
		{
			cout << endl << "Name of dolphin :- " << name << endl;
			cout << "Age of dolphin :- " << age << endl;
			cout << "Place of origin :- river"<< endl;
		}
};

int main()
{
	dolphin d;
	zebra z;
	z.set_value();	
	d.set_value();
	
	z.get_value();
	d.get_value();
}
