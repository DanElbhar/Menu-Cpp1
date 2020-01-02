
#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "Menu:" << endl;
	cout << "0. Exit" << endl;
	cout << "1. Area and perimeter" << endl;
	cout << "2. change money" << endl;
	cout << "3. print date" << endl;
	cout << "4. time, speed, distance" << endl;
	cin >> num;
	//EX1//
	if (num == 1) {
		double Width, height = 0;
		cout << " Enter Width is:" << endl;
		cout << " Enter height is: " << endl;
		cin >> Width >> height;
		double Area = (Width) * (height);
		double Perimeter = 2 * (Width + height);
		cout << "The Area  is:" << Area << endl;
		cout << "The Perimeter is : " << Perimeter << endl;
	}
	//EX2//
	else if (num == 2) {

		int x, num;
		int One = 1;
		int Two = 2;
		int Five = 5;
		int Ten = 10;
		int Twenty = 20;
		int Fifty = 50;
		int Onehundred = 100;


		cout << "Enter num: " << endl;
		cin >> num;

		x = num / 100;
		cout << " " << num;
		cout << " = 100*";
		cout << x;

		num = num - (x * 100);
		x = num / 50;
		cout << "+ 50*";
		cout << x;

		num = num - (x * 50);
		x = num / 20;
		cout << "+ 20*";
		cout << x;

		num = num - (x * 20);
		x = num / 10;
		cout << "+ 10*";
		cout << x;

		num = num - (x * 10);
		x = num / 5;
		cout << "+ 5*";
		cout << x;

		num = num - (x * 5);
		x = num / 2;
		cout << " + 2*";
		cout << x;

		num = num - (x * 2);
		x = num / 1;
		cout << " + 1*";
		cout << x;
		cout << " NIS ";

		return 0;
	}
	//EX3//
	else if (num == 3) {

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
	}
	//EX4//
	else if (num == 4) {
#include <iostream>
		using namespace std;
		int main() {
			int num; double x;
			cout << "I am calculating time x speed=distance. What are you interested in?";
			cin >> num;

			if (num == 1) {
				double velocity, x;
				int s;

				cout << " Please enter  distance:" << endl;
				cin >> s;
				cout << "Please enter velocity (kn/h):" << endl;
				cin >> velocity;

				x = s / velocity;//-->Formula for finding time//
				cout << "Your time is:" << x << " hours" << endl;
			}



			else if (num == 2) {
				int s, time;

				cout << "Please enter the time (hours):" << endl;
				cin >> time;
				cout << "Please enter the distance (km):" << endl;
				cin >> s;
				x = (double)(s) / (double)(time);//--> Formula for finding speed// 
				cout << "Your speed is:" << x << " km/h" << endl;
			}

			else if (num == 3) {
				double Velocity, time;

				cout << "Please enter the time :" << endl;
				cin >> time;
				cout << "Please enter the speed :" << endl;
				cin >> Velocity;
				x = Velocity * time;//-->Formula for finding way//
				cout << "Your distance is " << x << " km" << endl;
			}
			return 0;

		}


	return 0;
}