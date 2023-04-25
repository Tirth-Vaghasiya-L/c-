#include<iostream>
using namespace std;

class cafe
{
	private:
		int cafe_id;
		string name;
		string type;
		int rating;
		string location;
		int year;
		int quantity;
	public:
		cafe()
		{
			
			this -> cafe_id = cafe_id;
			this -> name = name;
			this -> type = type;
			this -> rating = rating;
			this -> location = location;
			this -> year = year;
			this -> quantity = quantity;
		}
		void setdata()
		{
			cout << "Enter id :-";
			cin >> cafe_id;
			cout << "Enter name :-";
			cin >> name;
			cout << "Enter type of cafe (rooftop or normal) :-";
			cin >> type;
			cout << "Enter rating of your cafe (in stars) :-";
			cin >> rating;
			cout << "Enter location of cafe (only city name):-";
			cin >> location;
			cout << "Enter year of establishment of cafe :-";
			cin >> year;
			cout << "Enter quantity of staff :-";
			cin >> quantity;
		}
		void getdata()
		{
			cout << " id :- " << cafe_id << endl;
			cout << " name :- " << name << endl;
			cout << " type :- " << type << endl;
			cout << " rating :- " << rating << endl;
			cout << " location :- " << location << endl;
			cout << " year :- " << year << endl;
			cout << " quantity :- " << quantity << endl;
		}
		
};

int main()
{	
	int i,n;
	int cafe_id;
	string name;
	string type;
	int rating;
	string location;
	int year;
	int quantity;
	
	cout << "enter number of cafe :- ";
	cin >> n;
	
	cafe c;
	
	for(i=0;i<n;i++)
	{
		c.setdata();
		c.getdata();
	}
} 
