#include <iostream>

using namespace std;

int main()
{
	int years, months;
	cout << "Enter year number between 1900-2100: ";
	cin >> years;
	cout << "Enter month number: ";
	cin >> months;

	if (months == 2) {
		if (((years % 100) % 4) == 0) {
			cout << "There is 29 days in February 1964." << endl;
		}
		else {
			cout << "Number of days=28" << endl;
		}

	}



	else if (months == 3 || months == 1 || months == 7 || months == 5
		|| months == 10 || months == 8 || months == 12) {

		cout << "Number of days=31" << endl;
	}

	else {
		cout << "Number of days=30";
	}

	return 0;
}