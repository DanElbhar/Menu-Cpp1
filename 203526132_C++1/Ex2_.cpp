#include <iostream>
using namespace std;

int main()
{
	int x , num ;
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
	cout <<  x;

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