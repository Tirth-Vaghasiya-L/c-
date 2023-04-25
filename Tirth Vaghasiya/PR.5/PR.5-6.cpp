#include<iostream>
using namespace std;

class a
{
	protected:
		int id;
		string name;
		string role;
		int salary;
		int exp;
		string comp_name;
		string address;
		string email;
		int contact;
	public:
		void setdata()
		{
			cout << "Enter id :- ";
			cin >> id;
			cout << "Enter name :- ";
			cin >> name;
			cout << "Enter role :- ";
			cin >> role;
		}
};

class b : public a
{
	public:
		void setdata()
		{
			cout << "Enter salary :- ";
			cin >> salary;
			cout << "Enter experience(in years) :- ";
			cin >> exp;
		}
};

class c : public b
{
	public:
		void setdata()
		{
			cout << "Enter company name :- ";
			cin >> comp_name;
			cout << "Enter address :- ";
			cin >> address;
		}
		
		void getdata()
		{
			cout << endl <<"Name :- " << name << endl;
			cout << "Role :- " << role << endl;
			cout << "Salary :- " << salary << endl;
		}
};

class d : public c
{
	 public:
		void setdata()
		{
			cout << "Enter email :- ";
			cin >> email;
			cout << "Enter contact :- ";
			cin >> contact;
		}
		
		void getdata()
		{
			cout << endl <<"Id :- " << id << endl;
			cout << "Name :- " << name << endl;
			cout << "Role :- " << role << endl;
			cout << "Salary :- " << salary << endl;
			cout << "Experience :- " << exp << endl;
			cout << "Company name :- " << comp_name << endl;
			cout << "Address :- " << address << endl;
			cout << "Email :- " << email << endl;
			cout << "Contact :- " << contact << endl;
		}
};

int main()
{
	d d1;
	d1.a::setdata();
	d1.b::setdata();
	d1.c::setdata();
	d1.d::setdata();
	
	d1.c::getdata();
	d1.getdata();
}
