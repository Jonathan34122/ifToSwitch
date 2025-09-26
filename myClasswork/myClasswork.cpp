#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int choice;

	cout << "Enter a choice: ";
	cin >> choice;

	switch (choice) {

	case 1:
		cout << fixed << showpoint << setprecision(2);
		break;
	case 2:
		cout << fixed << showpoint << setprecision(3);
		break;
	case 3:
		cout << fixed << showpoint << setprecision(3);
		break;
	case 4:
		cout << fixed << showpoint << setprecision(6);
		break;
	default:
		cout << fixed << showpoint << setprecision(8);
	}
}