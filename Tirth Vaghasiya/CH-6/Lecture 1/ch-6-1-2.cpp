#include<iostream>
using namespace std;

class P
{
	protected:
		float degree;
	public:
		void setdegree()
		{
			cout << "Enter Degree :-";
			cin >> degree;
		}
		
		void getdegree()
		{
			cout << "Degree :- " << degree << endl;
		}
};

class Q:public P
{
	protected:
		float fehren;
	public:		
		void getfehrenheit()
		{
			cout << "Fehrenheit :- " << degree * 9/5 + 32 << endl;
		}
};

class R:public Q
{
	protected:
		float kelvin;
	public:		
		void getkelvin()
		{
			cout << "Kelvin :- " << degree + 273.15 << endl;
		}
};

int main()
{
	R r1;
	
	r1.setdegree();
	r1.getdegree();
	r1.getfehrenheit();
	r1.getkelvin();
}
