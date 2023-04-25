#include<iostream>
using namespace std;

class admin
{
	protected:
		string comp_name;
	public:
		void setdata()
		{
			cout << "Enter company name :- ";
			cin >> comp_name;
		}
};

class manager
{
	protected:
		int id;
		string name;
	public:
		void setdata()
		{
			cout << "Enter id :- ";
			cin >> id;
			cout << "Enter name :- "; 
			cin >> name;
		}
};

class employee : public admin, public manager
{
	public:
		void getdata()
		{
			cout << endl << "Name of employee :- " << name << endl;
			cout << "Id of employee :- " << id << endl;
			cout << "Company name :- "<< comp_name <<endl;
		}
};

int main()
{
	employee e;
	e.admin::setdata();
	e.manager::setdata();
	e.getdata();
}
