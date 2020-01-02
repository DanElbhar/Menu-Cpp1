// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double Width, height = 0;
	cout << " Enter Width is:" << endl;
	cout << " Enter height is: " << endl;
	cin >> Width >> height ;
	 double Area = (Width) * (height);
	 double Perimeter = 2 * (Width + height);
	 cout << "The Area  is:" << Area << endl;
	 cout << "The Perimeter is : " << Perimeter << endl;

}



