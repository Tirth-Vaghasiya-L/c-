#include<iostream>
using namespace std;

class RBI
{
	protected:
		int rate = 5;
};

class SBI:public RBI
{
	public:		
		void getROI()
		{
			cout << "Rate of SBI :- " << rate - 1 << "%" << endl;
		}
};

class BOB:public RBI
{
	public:		
		void getROI()
		{
			cout << "Rate of BOB :- " << rate + 1 << "%" << endl;
		}
};
class ICICI:public RBI
{
	public:		
		void getROI()
		{
			cout << "Rate of ICICI :- " << rate - 2 << "%" << endl;
		}
};

int main()
{
	SBI s;
	BOB b;
	ICICI i;
	
	s.getROI();
	b.getROI();
	i.getROI();
}
