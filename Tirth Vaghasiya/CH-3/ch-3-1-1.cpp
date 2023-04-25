#include<iostream>
using namespace std;

class employee
{
	private:
		int emp_id;
		string name;
		int age;
		string role;
		int salary;
		int experience;
		string city;
		string company;
	public:
		void setdata()
		{
			cout << "Enter id :-";
			cin >> emp_id;
			cout << "Enter name :-";
			cin >> name;
			cout << "Enter age :-";
			cin >> age;
			cout << "Enter role :-";
			cin >> role;
			cout << "Enter salary :-";
			cin >> salary;
			cout << "Enter experience(in terms of year) :-";
			cin >> experience;
			cout << "Enter city :-";
			cin >> city;
			cout << "Enter company name :-";
			cin >> company;
		}
		void getdata()
		{
			cout << " Id :- " << emp_id << endl;
			cout << " Name :- " << name << endl;
			cout << " Age :- " << age << endl;
			cout << " Role :- " << role << endl;
			cout << " Salary :- " << salary << endl;
			cout << " Experience :- " << experience << endl;
			cout << " City :- " << city << endl;
			cout << " Comapny name :- " << company << endl;
		}
		
};

int main()
{	
	int i;
	int emp_id;
	string name;
	int age;
	string role;
	int salary;
	int experience;
	string city;
	string company;
	
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
