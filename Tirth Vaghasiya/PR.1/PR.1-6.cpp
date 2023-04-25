#include<iostream>
using namespace std;

int main()
{
	int i;
	int a[5];
	for(i=0;i<5;i++)
	{
		cout << "Enter Number :- ";
		cin >> a[i];
	}
	
	for(i=0;i<5;i++)
	{
		a[5]+=a[i]*a[i]*a[i]; 
	}
	cout << "cube is :- " << a[5];
}
