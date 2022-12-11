#include <iostream>
using namespace std;

int Add (int num1, int num2) {
	cout << "Addition: " << num1 + num2 << endl;
}
	
int Sub (int num1, int num2) {
	cout << "Subtraction: " << num1 - num2 << endl;
}

int main () {
	int opt = 1, num1, num2;
	
	while (opt != 0) {
		cout << "\nPress 1 for Addition." << endl;
		cout << "Press 2 for Subtraction." << endl;
		cout << "Press 0 to Quit." << endl;
		cout << "Enter Your Choice: ";
		cin >> opt;
		
		switch (opt) {
			case 1:
				cout << "\nEnter First Number: ";
				cin >> num1;
				cout << "Enter Second Number: ";
				cin >> num2;
				Add(num1, num2);
				break;
				
			case 2:
				cout << "Enter First Number: ";
				cin >> num1;
				cout << "Enter Second Number: ";
				cin >> num2;
				Sub(num1, num2);
				break;
		}
	}
	
	return 0;
}
