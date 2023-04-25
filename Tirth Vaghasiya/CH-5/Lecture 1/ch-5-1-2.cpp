#include<iostream>
using namespace std;

class customer
{
	private:
		int cust_id;
		string name;
		int age;
		string telecom;
		int mobile;
		string city;
		string simcard;
	public:
		void setdata()
		{
			cout << "Enter id :-";
			cin >> cust_id;
			cout << "Enter name :-";
			cin >> name;
			cout << "Enter age :-";
			cin >> age;
			cout << "Enter telecom brand name :-";
			cin >> telecom;
			cout << "Enter mobile :-";
			cin >> mobile;
			cout << "Enter city :-";
			cin >> city;
			cout << "Enter simcard validity :-";
			cin >> simcard;
		}
		void getdata()
		{
			cout << " Id :- " << cust_id << endl;
			cout << " Name :- " << name << endl;
			cout << " Age :- " << age << endl;
			cout << " Telecom brand name :- " << telecom << endl;
			cout << " Mobile number :- " << mobile << endl;
			cout << " City :- " << city << endl;
			cout << " Simcard validity:- " << simcard << endl;
		}
		
};

int main()
{	
	int i;
	int cust_id;
	string name;
	int age;
	string telecom;
	string mobile;
	int city;
	int simcard;
	
	customer c;
	
	for(i=0;i<5;i++)
	{
		c.setdata();
		cout << endl;
	}
	cout << "OUTPUT!!" << endl;
	for(i=0;i<5;i++)
	{
		cout <<endl;
		c.getdata();
	}
} 
