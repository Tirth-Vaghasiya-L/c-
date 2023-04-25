#include<iostream>
using namespace std;

class company
{
	private:
		int comp_id;
		string name;
		int quantity;
		int revenue;
		int imported;
		int exported;
		string ceo;
	public:
		company(int comp_id,string name,int quantity,int revenue,int imported,int exported,string ceo)
		{
			
			this -> comp_id = comp_id;
			this -> name = name;
			this -> quantity = quantity;
			this -> revenue = revenue;
			this -> imported = imported;
			this -> exported = exported;
			this -> ceo = ceo;
		}
		void setdata()
		{
			cout << "Enter id :-";
			cin >> comp_id;
			cout << "Enter name :-";
			cin >> name;
			cout << "Enter quantity of staff :-";
			cin >> quantity;
			cout << "Enter revenue (per year) :-";
			cin >> revenue;
			cout << "Enter no. of diamond imported (per year) :-";
			cin >> imported;
			cout << "Enter no. of diamond exported (per year) :-";
			cin >> exported;
			cout << "Enter name of CEO :-";
			cin >> ceo;
		}
		void getdata()
		{
			cout << " id :- " << comp_id << endl;
			cout << " name :- " << name << endl;
			cout << " quantity :- " << quantity << endl;
			cout << " revenue :- " << revenue << endl;
			cout << " no. of diamond imported (per year) :- " << imported << endl;
			cout << " no. of diamond exported (per year) :- " << exported << endl;
			cout << " CEO :- " << ceo << endl;
		}
		
};

int main()
{	
	int n,i;
	int comp_id;
	string name;
	int quantity;
	int revenue;
	int imported;
	int exported;
	string ceo;
	
	cout << "enter number of companies :- ";
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		cout << "Enter id :-";
		cin >> comp_id;
		cout << "Enter name :-";
		cin >> name;
		cout << "Enter quantity of staff :-";
		cin >> quantity;
		cout << "Enter revenue (per year) :-";
		cin >> revenue;
		cout << "Enter no. of diamond imported (per year) :-";
		cin >> imported;
		cout << "Enter no. of diamond exported (per year) :-";
		cin >> exported;
		cout << "Enter name of CEO :-";
		cin >> ceo;
		company c(comp_id, name, quantity, revenue, imported, exported, ceo);
		c.getdata();
	}
} 
