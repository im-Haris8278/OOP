#include<iostream>
using namespace std;

class calculator {
	private:
		int NA[10];
		int counter;
		
	public:
		
		calculator () {
			counter = 0;
		}
		
		int Add (int num1, int num2) {
			NA[counter++] = num1 + num2;
			return ( num1 + num2 );
		}
		
		int Subtract (int num1, int num2) {
			NA[counter++] = num1 - num2;
			return ( num1 - num2 );
		}
		
		int Multiply (int num1, int num2) {
			NA[counter++] = num1 * num2;
			return ( num1 * num2 );
		}
		
		int Divide (int num1, int num2) {
			NA[counter++] = num1 / num2;
			return ( num1 / num2 );
		}
		
		void ViewHistory () {
			int i = 0;
			cout << endl << endl << "Array Numbers are: ";
			for ( i = 0; i < counter; i++ ) {
				cout << NA[i] << ", ";
			}
		}
};

int main () {
	calculator casio;
	int n1, n2, opt = 1;
	
	while (opt != 0) {
		cout << "\nPress 1 for Addition." << endl;
		cout << "Press 2 for Subtraction." << endl;
		cout << "Press 3 for Multiply." << endl;
		cout << "Press 4 for Division." << endl;
		cout << "Press 5 to View History." << endl;
		cout << "Press 0 to Exit." << endl;
		cout << "Enter Your Choice: ";
		cin >> opt;
		
		switch (opt) {
			case 1:
				cout << "\nEnter First Number: ";
				cin >> n1;
				cout << "Enter Second Number: ";
				cin >> n2;
				cout << "\nAddition: " << casio.Add(n1, n2) << endl;
				break;
				
			case 2:
				cout << "\nEnter First Number: ";
				cin >> n1;
				cout << "Enter Second Number: ";
				cin >> n2;
				cout << "\nSubtract: " << casio.Subtract(n1, n2) << endl;
				break;
				
			case 3:
				cout << "\nEnter First Number: ";
				cin >> n1;
				cout << "Enter Second Number: ";
				cin >> n2;
				cout << "\nMultiply: " << casio.Multiply(n1, n2) << endl;
				break;
				
			case 4:
				cout << "\nEnter First Number: ";
				cin >> n1;
				cout << "Enter Second Number: ";
				cin >> n2;
				cout << "\nDivision: " << casio.Divide(n1, n2) << endl;
				break;
				
			case 5:
				cout << "\nNumbers in Array are: ";
				casio.ViewHistory();
				break;
				
			default:
				cout << "\nSelect from the Given Menu." << endl;
		}
	}
	
	return 0;
}
