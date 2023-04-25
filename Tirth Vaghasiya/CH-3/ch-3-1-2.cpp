#include<iostream>
using namespace std;

class car
{
	private:
		int car_id;
		string name;
		string color;
		string model;
		int year;
	public:
		void setdata()
		{
			cout << "Enter car id :-";
			cin >> car_id;
			cout << "Enter  car company name :-";
			cin >> name;
			cout << "Enter color of car :-";
			cin >> color;
			cout << "Enter model of car:-";
			cin >> model;
			cout << "Enter release year of car :-";
			cin >> year;
		}
		void getdata()
		{
			cout << " Car id :- " << car_id << endl;
			cout << " Car company name :- " << name << endl;
			cout << " Color of car :- " << color << endl;
			cout << " Model of car :- " << model << endl;
			cout << " Release year of car :- " << year << endl;
		}
		
};

int main()
{	
	int i;
	int car_id;
	string name;
	string color;
	string model;
	int year;
	
	car c;
	
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
