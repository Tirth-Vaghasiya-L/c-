/*14. WAP to make Supermarket Billing System.
Requirements:
(A) Verify User Id And Password
(B) User Input Item Number , Item Name , Quantity , Tax , Discount.
(C) Display All Record In Ascending order (by item Number*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class market
{
	private:
		int id;
		int password;
		int id1;
		int password1;
		int number;
	public:
		void setdata()
		{
			cout << "Enter Your Id :-";
			cin >> id;
			cout << "Enter Your Password :-";
			cin >> password;
			system("cls");
			cout << "Verify Your Id :-";
			cin >> id1;
			cout << "Verify Your Password :-";
			cin >> password1;
			if(id==id1 && password==password1)
			{
				cout << "\t\t\t\t  --------------------------------------------------------" << endl;
				cout << "\t\t\t\t\t\t Signed In Successfully !!" << endl;
				cout << "\t\t\t\t  --------------------------------------------------------" << endl << endl;
				cout << "\t\t\t\t Enter Item Number(Between 1 To 5,to display all records in order press 6) :-";
				cin >> number;
					switch(number)
					{
						case 1:
							system("cls");
							cout << "\t\t\t\t  -------------------------------------------------------------" << endl;
							cout << "\t\t\t\t Item Number ||    Item Name    || Quantity || Tax || Discount" << endl;
							cout << "\t\t\t\t  -------------------------------------------------------------" << endl;
							cout << "\t\t\t\t\t1    ||  Nestle Coffee  ||    50    || 2%  || 15%" << endl;
							break;
						case 2:
							system("cls");
							cout << "\t\t\t\t  --------------------------------------------------------------" << endl;
							cout << "\t\t\t\t Item Number ||    Item Name    || Quantity || Tax || Discount" << endl;
							cout << "\t\t\t\t  -------------------------------------------------------------" << endl;
							cout << "\t\t\t\t\t2    ||   Lays Wafers   ||   30     ||  3%  || 5%" << endl;
							break;
						case 3:
							system("cls");
							cout << "\t\t\t\t  --------------------------------------------------------" << endl;
							cout << "\t\t\t\t Item Number ||    Item Name    || Quantity || Tax || Discount" << endl;
							cout << "\t\t\t\t  --------------------------------------------------------" << endl;
							cout << "\t\t\t\t\t3    || Balaji Crunchex ||   68     ||  6% || 13%" << endl;
							break;
						case 4:
							system("cls");
							cout << "\t\t\t\t  --------------------------------------------------------------" << endl;
							cout << "\t\t\t\t Item Number ||    Item Name    || Quantity || Tax || Discount" << endl;
							cout << "\t\t\t\t  -------------------------------------------------------------" << endl;
							cout << "\t\t\t\t\t4    ||   chupa chups   ||   45     ||  2% || 6%" << endl;	
						case 5:
							system("cls");
							cout << "\t\t\t\t  --------------------------------------------------------------" << endl;
							cout << "\t\t\t\t Item Number ||    Item Name    || Quantity || Tax || Discount" << endl;
							cout << "\t\t\t\t  -------------------------------------------------------------" << endl;
							cout << "\t\t\t\t\t4    ||   adidas shoe   ||   23     ||  6% || 40%" << endl;
						case 6:
							system("cls");
							cout << "\t\t\t\t -------------------------------------------------------------" << endl;
							cout << "\t\t\t\t Item Number ||    Item Name    || Quantity || Tax || Discount" << endl;
							cout << "\t\t\t\t -------------------------------------------------------------" << endl;
							cout << "\t\t\t\t\t1    ||  Nestle Coffee  ||    50    || 2%  || 15%" << endl;
							cout << "\t\t\t\t -------------------------------------------------------------" << endl;
							cout << "\t\t\t\t\t2    ||   Lays Wafers   ||   30     ||  3% || 5%" << endl;
							cout << "\t\t\t\t -------------------------------------------------------------" << endl;
							cout << "\t\t\t\t\t3    || Balaji Crunchex ||   68     ||  6% || 13%" << endl;
							cout << "\t\t\t\t -------------------------------------------------------------" << endl;
							cout << "\t\t\t\t\t4    ||   chupa chups   ||   45     ||  2% || 6%" << endl;
							cout << "\t\t\t\t  -------------------------------------------------------------" << endl;
							cout << "\t\t\t\t\t5    ||   adidas shoe   ||   23     ||  6% || 40%" << endl;
					}
			}
		}
};

int main()
{
	market m;
	m.setdata();
}
