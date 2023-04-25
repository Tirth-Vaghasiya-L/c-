#include<iostream>
using namespace std;

class railway
{
	private:
		int numb;
		int n;
		int numbers[3];
		string name[3];
		string source[3];
		string destination[3];
		int time[3];
		
	public:
		railway()
		 {
			cout << "Enter number of trains: ";
			cin >> n;
			
			system("cls");
		}
		void setdata()
		{
			for(int i=0;i<n;i++)
			{
				cout << "Enter " << i+1 << " Train Number :-";
				cin >> numbers[i];
				cout << "Enter " << i+1 << " Train Name :-";
				cin >> name[i];
				cout << "Enter " << i+1 << " Train Source :-";
				cin >> source[i];
				cout << "Enter " << i+1 << " Train Destination :-";
				cin >> destination[i];
				cout << "Enter " << i+1 << " Time Of Train :-";
				cin >> time[i];
				
				
				system("cls");
			}	

			
		}
		void getdata()
		{			
			
			cout << "Enter Train Number For Ticket :-";
			cin >> numb;
			
			for(int i=0; i<n; i++) 
			{
				if(numb == numbers[i])
				 {
					cout << "  -----------------------------------------------------------" << endl;
					cout << " |\t\t\t   TICKET\t\t\t     |" << endl;
					cout << "  -----------------------------------------------------------" << endl;
					cout << " |     NO.     NAME      SOURCE    DESTINATION    TIME       |" << endl;
					cout << " |     " << numb << "       " << name[i]  << "       " << source[i] << "\t\t" << destination[i] << "\t " << time[i] << "\t     |" << endl;
					cout << " |                                                           |" << endl;
					cout << " |                                                           |" << endl;
					cout << " |                                                           |" << endl;
					cout << " |                                                           |" << endl;
					cout << "  -----------------------------------------------------------" << endl;
				}
			}
		
		}
};

int main()
{
	railway r;
	r.setdata();
	r.getdata();
}
