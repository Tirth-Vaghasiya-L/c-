#include<iostream>
#include<stdlib.h>
using namespace std;

class bank
{
	private:
		char choice;
		char choice1;
		char choice2;
		string name;
		int account;
		int number;
		string email;
		int money;
	public:
		void setdata()
		{
			
			cout << "\t\t\t\t\t  PRESS N To Continue......" << endl;
			cout << "\t\t\t\t\t\t";
			cin >> choice;
			switch(choice)
			{
				case 'n':
					system("cls");
			 		cout << "\t\t\t\t  --------------------------------------------------------" << endl;
			 		cout << "\t\t\t\t  Press A To Login As Administrator Or S To Login As Staff" << endl;
			 		cout << "\t\t\t\t  --------------------------------------------------------" << endl;
			 		cout << "\t\t\t\t\t";
			 		cin >> choice1;
			 		
			 		switch(choice1)
			 		{
			 			case 'a':
			 				system("cls");
			 				cout << "\t\t\t\t -----------------------------------------------------------------" << endl;
							cout << "\t\t\t\t\t\t-: Welcome As Administrator :-" << endl;
							cout << "\t\t\t\t -----------------------------------------------------------------" << endl << endl;
							cout << "\t\t\t\t Enter Name Of Administrator\t:";
							cin >> name;
							cout << "\t\t\t\t Enter The Account Number Of Administrator\t:";
							cin >> account;
							cout << "\t\t\t\t Enter The Phone Number Of Administrator\t:";
							cin >> number;
							cout << "\t\t\t\t Enter The E-Mail Of Administrator\t:";
							cin >> email;
							
							system("cls");
							cout << "\t\t\t\t   -------------------------------------------------------" << endl;
							cout << "\t\t\t\t\tName\t:" << name << endl;
							cout << "\t\t\t\t\tAccount.No\t:" << account << endl;
							cout << "\t\t\t\t\tPhone.No\t:" << number << endl;
							cout << "\t\t\t\t\tE-mail\t:" << email << endl;
							cout << "\t\t\t\t   -------------------------------------------------------" << endl << endl;
							cout << "\t\t\t\tPress [1] To Deposit The Money" << endl;
							cout << "\t\t\t\tPress [2] To Transfer The Money" << endl;
							cout << "\t\t\t\tPress [3] To Withdraw The Money" << endl;
							cin >> choice2;
								switch(choice2)
								{
									case '1':
										system("cls");
										cout << "\t\t\t\t   -------------------------------------------------------" << endl;
										cout << "\t\t\t\t   How Many Do You Want To Deposit:";
										cin >> money;
										cout << "\t\t\t\t   -------------------------------------------------------" << endl << endl;
										cout << "\t\t\t\t   You Deposited\t:" << money << endl;
										cout << "\t\t\t\t   Congrats Your Money Is Successfully Deposited" << endl;
										cout << "\t\t\t\t   Your Account Balance Is:1500000" << endl;
										break;
									case '2':
										system("cls");
										cout << "\t\t\t\t   -------------------------------------------------------" << endl;
										cout << "\t\t\t\t   How Many Do You Want To Transfer:";
										cin >> money;
										cout << "\t\t\t\t   -------------------------------------------------------" << endl << endl;
										cout << "\t\t\t\t   You Transfered\t:" << money << endl;
										cout << "\t\t\t\t   Congrats Your Money Is Successfully Transfered" << endl;
										cout << "\t\t\t\t   Your Account Balance Is:1500000" << endl;
										break;
									case '3':
										system("cls");
										cout << "\t\t\t\t   -------------------------------------------------------" << endl;
										cout << "\t\t\t\t   How Many Do You Want To Withdraw:";
										cin >> money;
										cout << "\t\t\t\t   -------------------------------------------------------" << endl << endl;
										cout << "\t\t\t\t   You Withdrawed\t:" << money << endl;
										cout << "\t\t\t\t   Congrats Your Money Is Successfully Withdrawed" << endl;
										cout << "\t\t\t\t   Your Account Balance Is:1500000" << endl;
										break;
								}
								break;
						case 's':
							system("cls");
							cout << "\t\t\t\t -----------------------------------------------------------------" << endl;
							cout << "\t\t\t\t\t\t\t-: Welcome As Staff :-"	<< endl;
							cout << "\t\t\t\t -----------------------------------------------------------------" << endl;
							cout << "\t\t\t\t Enter Name Of Staff\t:";
							cin >> name;
							cout << "\t\t\t\t Enter The Account Number Of Staff\t:";
							cin >> account;
							cout << "\t\t\t\t Enter The Phone Number Of Staff\t:";
							cin >> number;
							cout << "\t\t\t\t Enter The E-Mail Of Staff\t:";
							cin >> email;
							
							system("cls");
							cout << "\t\t\t\t -----------------------------------------------------------------" << endl;
							cout << "\t\t\t\t\tName:" << name << endl;
							cout << "\t\t\t\t\tAccount.No:" << account << endl;
							cout << "\t\t\t\t\tPhone.No:" << number << endl;
							cout << "\t\t\t\t\tE-mail:" << email << endl;
							cout << "\t\t\t\t -----------------------------------------------------------------" << endl;
							cout << "\t\t\t\tPress [1] To Deposit The Money" << endl;
							cout << "\t\t\t\tPress [2] To Transfer The Money" << endl;
							cout << "\t\t\t\tPress [3] To Withdraw The Money" << endl;
							cin >> choice2;
								switch(choice2)
								{
									case '1':
										system("cls");
										cout << "\t\t\t\t   -------------------------------------------------------" << endl;
										cout << "\t\t\t\t   How Many Do You Want To Deposit:";
										cin >> money;
										cout << "\t\t\t\t   -------------------------------------------------------" << endl << endl;
										cout << "\t\t\t     You Deposited\t:" << money << endl;
										cout << "\t\t\t\t   Congrats Your Money Is Successfully Deposited" << endl;
										cout << "\t\t\t\t   Your Account Balance Is:1500000" << endl;
										break;
									case '2':
										system("cls");
										cout << "\t\t\t\t   -------------------------------------------------------" << endl;
										cout << "\t\t\t\t   How Many Do You Want To Transfer:";
										cin >> money;
										cout << "\t\t\t\t   -------------------------------------------------------" << endl << endl;
										cout << "\t\t\t     You Transfered\t:" << money << endl;
										cout << "\t\t\t\t   Congrats Your Money Is Successfully Transfered" << endl;
										cout << "\t\t\t\t   Your Account Balance Is:1500000" << endl;
										break;
									case '3':
										system("cls");
										cout << "\t\t\t\t   -------------------------------------------------------" << endl;
										cout << "\t\t\t\t   How Many Do You Want To Withdraw:";
										cin >> money;
										cout << "\t\t\t\t   -------------------------------------------------------" << endl << endl;
										cout << "\t\t\t     You Withdrawed\t:" << money << endl;
										cout << "\t\t\t\t   Congrats Your Money Is Successfully Withdrawed" << endl;
										cout << "\t\t\t\t   Your Account Balance Is:1500000" << endl;
										break;
								}
					}
			} 
				 
		}
		void getdata()
		{
			cout << "\t\t\t\t\t-: BANK MANAGEMENT SYSTEM :-" << endl;
			cout << "\t\t\t\t   ----------------------------------------" << endl;
			cout << "\t\t\t\t\t-: Designed And Programmed By :-" << endl;
			cout << "\t\t\t\t   ----------------------------------------" << endl;
			cout << "\t\t\t\t\t      Tirth Vaghasiya" << endl << endl << endl;			
			cout << "\t\t\t\t\t      -: Trainer :-" << endl;
			cout << "\t\t\t\t   ----------------------------------------" << endl;
			cout << "\t\t\t\t\t       Jay Gondaliya" << endl << endl << endl;
		}
};

int main()
{
	bank b;
	
	b.getdata();
	b.setdata();
}
