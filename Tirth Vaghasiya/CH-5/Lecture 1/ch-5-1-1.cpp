#include<iostream>
using namespace std;

class student
{
	private:
		int stu_id;
		string name;
		int age;
		string course;
		string email;
		string city;
		string college;
	public:
		void setdata()
		{
			cout << "Enter id :-";
			cin >> stu_id;
			cout << "Enter name :-";
			cin >> name;
			cout << "Enter age :-";
			cin >> age;
			cout << "Enter course:-";
			cin >> course;
			cout << "Enter email :-";
			cin >> email;
			cout << "Enter city :-";
			cin >> city;
			cout << "Enter college :-";
			cin >> college;
		}
		void getdata()
		{
			cout << " id :- " << stu_id << endl;
			cout << " name :- " << name << endl;
			cout << " age :- " << age << endl;
			cout << " course :- " << course << endl;
			cout << " email :- " << email << endl;
			cout << " city :- " << city << endl;
			cout << " college :- " << college << endl;
		}
		
};

int main()
{	
	int i;
	int stu_id;
	string name;
	int age;
	int course;
	string email;
	int city;
	int college;
	
	
	
	student c;
	
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
