#include<iostream>
using namespace std;

class hotel{
	private:
		int id;
		string name;
		string type;
		int rating;
		int year;
		int staff_quantity;
		int room_quantity;
		static string location;
		static int idCount;
	public:
		void setData() {
			id = idCount;
			idCount++;
			cout << "Enter name\t: ";
			cin >> name;
			cout << "Enter type(hotel/motel)\t: ";
			cin >> type;
			cout << "Enter rating\t: ";
			cin >> rating;
			cout << "Enter established year\t: ";
			cin >> year;
			cout << "Enter staff quantity\t: ";
			cin >> staff_quantity;
			cout << "Enter room quantity\t: ";
			cin >> room_quantity;
		}
		
		
		
		static void changelocation() {
			cout << endl << "Enter new location : ";
			cin  >> location;
			cout << endl;
		}
		
		static void header() {
			cout << endl;
			cout << "Id\tName\ttype\trating\t location\tstaff_quantity\troom_quantity" << endl;
			cout << "------- ------- ------- -------  --------        --------------  --------------" << endl;
		}
		
		void getDataInTable() {
			cout << id << "\t" << name << "\t" << type << "\t" << rating << "        " << location << "\t\t\t" << staff_quantity << "\t\t" << room_quantity << endl;
		}
};

string hotel::location = "surat";
int hotel::idCount = 101;


int main() {
	
	int n,i;
	
	cout << "Enter number of hotels/motels : ";
	cin  >> n;
	
	hotel s[n];
	
	for(i=0; i<n; i++) {
		s[i].setData();
	}
	
	hotel::header();
	
	for(i=0; i<n; i++) {
		s[i].getDataInTable();
	}
	
	
	hotel::changelocation();
	
	hotel::header();
	for(i=0; i<n; i++) {
		s[i].getDataInTable();
	}
	
}

