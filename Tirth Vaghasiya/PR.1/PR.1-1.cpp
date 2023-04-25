#include<iostream>
using namespace std;

int main()
{
	string a;
	cout << " Enter any string :- ";
	cin >> a;
	
	if ( strcmp(a,'1')  || a == '2' || a == '3' || a == '4'|| a == '5'|| a == '6' || a == '7' || a == '8' || a == '9' || a == '0')
    {
        cout << "This string has numbers";
    }
    
    else
    {
        cout << "This string doesn't have numbers";
    }
}
