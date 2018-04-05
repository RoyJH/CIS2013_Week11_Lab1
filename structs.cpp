#include <iostream>
#include <cstring>
using namespace std;

struct myDate {
	int day;
	int month;
	int year;

};
struct Person{
	myDate birthday;
	string firstname;
	string lastname;
	int age;
};
void printmyDate(myDate);

void printmyDate(myDate d){
cout << d.month << "/" << d.day << "/" << d.year << endl;
}

int main(){
	
	myDate bob_bday;
	myDate tom_bday;
	
	Person bob;
	bob.firstname = "Bob";
	bob.lastname = "Rockers";
	bob.age = 41;
	cout << "Enter Bob's birthday day: ";
	cin >> bob.birthday.day;
	
	cout << "Enter Bob's birthday month: ";
	cin >> bob.birthday.month;
	
	cout << "Enter Bob's birthday year: ";
	cin >> bob.birthday.year;
	
	cout << "Bob's Birthday is: "; printmyDate(bob.birthday); cout << endl;
		
}