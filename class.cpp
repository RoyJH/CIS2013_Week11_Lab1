#include <iostream>
#include <cstring>
using namespace std;

class BirthDate {
	public:
		int year;
		int month;
		int day;
		void print(){
			cout << month <<"/"<<day<<"/"<<year;
		}
	void set(int d, int m, int y){
	year =y;
	month = m;
	day = d;
	}
};

int main (){
	BirthDate bob;
	
	cout << "Enter Bob's birthday day: ";
	cin >> bob.day;
	
	cout << "Enter Bob's birthday month: ";
	cin >> bob.month;
	
	cout << "Enter Bob's birthday year: ";
	cin >> bob.year;
	
	cout << "Bob's Birthday is: "; 
	//printmyDate(bob.birthday); 
	//cout << endl;
	bob.print();
	cout << endl;
	
	BirthDate tom;
	tom.set(20, 5, 1984);
	cout << "Tom's Birthday is: ";
	tom.print();
	return 0;
}