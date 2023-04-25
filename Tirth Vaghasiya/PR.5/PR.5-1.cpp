#include<iostream>
using namespace std;

class data
{
	protected:
		int width;
		int height;
	public:
		data()
		{
			cout << " Enter width :- ";
			cin >> width;
			
			cout << " Enter height :- ";
			cin >> height;
		}
};

class triangle : public data
{
	public:
		void area()
		{
			cout << " Area of triangle :- " << 0.5 * width * height << endl;
		}
};

class rectangle : public data
{
	public:
		void area()
		{
			cout << " Area of rectangle :- " << width * height << endl;
		}
};

int main()
{
	triangle t;
	rectangle r;
	
	t.area();
	r.area();
}
