#include<iostream>
using namespace std;

class hotel
{
	private:
		int id;
		string name;
		string type;
		int staff_size;
		int room_size;
		int year;
		string address;
		int rating;
		string website;
	public:
		hotel(int id,string name,string type,int staff_size,int room_size,int year,string address,int rating,string website)
		{
			
			this -> id = id;
			this -> name = name;
			this -> type = type;
			this -> staff_size = staff_size;
			this -> room_size = room_size;
			this -> year = year;
			this -> address = address;
			this -> rating = rating;
			this -> website = website;
		}
		void setdata()
		{
			cout << "Enter id :-";
			cin >> id;
			cout << "Enter name :-";
			cin >> name;
			cout << "Enter type :-";
			cin >> type;
			cout << "Enter no. of staff  :-";
			cin >> staff_size;
			cout << "Enter no. of room :-";
			cin >> room_size;
			cout << "Enter estabilshed year :-";
			cin >> year;
			cout << "Enter address :-";
			cin >> address;
			cout << "Enter rating :-";
			cin >> rating;
			cout << "Enter website :-";
			cin >> website;
		}
		void getdata()
		{
			cout << " id :- " << id << endl;
			cout << " name :- " << name << endl;
			cout << " type :- " << type << endl;
			cout << " no. of staff :- " << staff_size << endl;
			cout << " no. of room :- " << room_size << endl;
			cout << " estabilshed year :- " << year << endl;
			cout << " address :- " << address << endl;
			cout << " rating :- " << rating << endl;
			cout << " website :- " << website << endl;
		}
		
};

int main()
{	
	int n,i;
	int id;
	string name;
	string type;
	int staff_size;
	int room_size;
	int year;
	string address;
	int rating;
	string website;
	
	cout << "enter number of hotels :- ";
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		cout << "Enter id :-";
		cin >> id;
		cout << "Enter name :-";
		cin >> name;
		cout << "Enter type :-";
		cin >> type;
		cout << "Enter no. of staff  :-";
		cin >> staff_size;
		cout << "Enter no. of room :-";
		cin >> room_size;
		cout << "Enter estabilshed year :-";
		cin >> year;
		cout << "Enter address :-";
		cin >> address;
		cout << "Enter rating :-";
		cin >> rating;
		cout << "Enter website :-";
		cin >> website;
		hotel c(id, name, type, staff_size, room_size, year, address, rating, website);
		c.getdata();
	}
} 
