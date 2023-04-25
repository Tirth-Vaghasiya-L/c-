#include<iostream>
using namespace std;

class employee
{
	private:
		int emp_id;
		string name;
		string role;
		int salary;
		int experience;
		string address;
		string email;
		int contact;
	public:
		void setdata()
		{
			cout << "Enter id :-";
			cin >> emp_id;
			cout << "Enter name :-";
			cin >> name;
			cout << "Enter role :-";
			cin >> role;
			cout << "Enter salary :-";
			cin >> salary;
			cout << "Enter experience(in terms of year) :-";
			cin >> experience;
			cout << "Enter address :-";
			cin >> address;
			cout << "Enter email :-";
			cin >> email;
			cout << "Enter contact :-";
			cin >> contact;
		}
		void getdata()
		{
			cout << " Id :- " << emp_id << endl;
			cout << " Name :- " << name << endl;
			cout << " Role :- " << role << endl;
			cout << " Salary :- " << salary << endl;
			cout << " Experience :- " << experience << endl;
			cout << " Address :- " << city << endl;
			cout << " Email :- " << email << endl;
			cout << "Contact :- " << contact << endl;
		}
		
};

int main()
{	
	int i;
	int emp_id;
	string name;
	string role;
	int salary;
	int experience;
	string address;
	string email;
	int contact;
	
	employee e;
	
	for(i=0;i<5;i++)
	{
		e.setdata();
		cout << endl;
	}
	cout << "OUTPUT!!" << endl;
	for(i=0;i<5;i++)
	{
		cout <<endl;
		e.getdata();
	}
} 
