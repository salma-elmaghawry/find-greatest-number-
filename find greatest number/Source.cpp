#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout << "please enter number 1 \n";
	cin >> num1;
	cout << "please enter number 2 \n";
	cin >> num2;
	cout << "please enter number 3 \n";
	cin >> num3;
	if (num1 > num2 && num1 > num3)
		cout << num1 << " Is The Greatest Number \n";
	else if (num2 > num1 && num2 > num3)
		cout << num2 << " Is The Greatest Number \n";
	else
		cout << num3 << " Is The Greatest Number \n";

}