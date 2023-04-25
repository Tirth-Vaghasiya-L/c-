#include<iostream>
using namespace std;

class demo
{
	private:
		int id;
		string name;
	public:
		demo(int id,string name)
		{
			this -> id = id;
			this -> name = name;
		
			cout << "Id\t:-" << id << endl;
			cout << "Name\t:-" << name <<endl;
		}
		demo(demo & d)
		{
			id = d.id;
			name = d.name;
			cout << "Id\t:-" << id << endl;
			cout << "Name\t:-" << name <<endl;
		}
};

int main()
{
	demo d1(101,"pankaj");
	demo d2(d1);
}
