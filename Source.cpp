#include <iostream>
using namespace std;

int main() {
	int userChoice;
	cout << "Please select your favourite beverage from the list" << endl << "1. Lemonade" << endl << "2. Water" << endl << "3. Milk" << endl << "4. Coca Cola" << endl << "5. Appletiser" << endl;
	cin >> userChoice;
	switch (userChoice) {
	case 1 :
		cout << "Lemonade";
		break;
	case 2 :
		cout << "Water";
		break;
	case 3 :
		cout << "Milk";
		break;
	case 4 :
		cout << "Coca Cola";
		break;
	case 5 :
		cout << "Appletiser";
		break;
	default :
		cout << "Error. choice was not valid, here is your money back";
	}
}
