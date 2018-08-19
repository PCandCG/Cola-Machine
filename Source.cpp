#include <iostream>
using namespace std;

int main() {
	int userChoice;
	cout << "Please select your favourite beverage from the list" << endl << "1. Lemonade" << endl << "2. Water" << endl << "3. Milk" << endl << "4. Coca Cola" << endl << "5. Appletiser" << endl;
	cin >> userChoice;
	if (userChoice == 1) {
		cout << "Lemonade" << endl;
	}
	else if (userChoice == 2) {
		cout << "Water" << endl;
	}
	else if (userChoice == 3) {
		cout << "Milk" << endl;
	}
	else if (userChoice == 4) {
		cout << "Coca Cola" << endl;
	}
	else if (userChoice == 5) {
		cout << "Appletiser" << endl;
	}
	system("PAUSE");
}
