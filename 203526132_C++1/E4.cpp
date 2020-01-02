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
