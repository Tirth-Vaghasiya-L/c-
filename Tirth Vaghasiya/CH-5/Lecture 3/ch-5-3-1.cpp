#include<iostream>
using namespace std;


class time2;


class time1
{
	private:
		int h;
		int m;
		int s;
		
	public:
		void setdata()
		{
			cout << "Enter hour :- ";
			cin >> h;
			cout << "Enter minute :- ";
			cin >> m;
			cout << "Enter second :- ";
			cin >> s;
		}
		
		friend void calculator(time1,time2);
		
};

class time2
{
	private:
		int h;
		int m;
		int s;
		
	public:
		void setdata()
		{
			cout << "Enter hour :- ";
			cin >> h;
			cout << "Enter minute :- ";
			cin >> m;
			cout << "Enter second :- ";
			cin >> s;
		}
		
		friend void calculator(time1,time2);
		
};

void calculator(time1 a,time2 b)
{
	int h,m,s;
	
	h = a.h + b.h;
	m = a.m + b.m;
	s = a.s + b.s; 
	
	while(s>59)
	{
		s-=60;
		m++;
	}
	
	while(m>59)
	{
		m-=60;
		h++;
	}
	
	cout << "Time : " << h << ":" << m << ":" << s <<endl;
	
}

int main()
{
	time1 t1;
	time2 t2;
	
	t1.setdata();
	t2.setdata();
	
	calculator(t1,t2);
}
