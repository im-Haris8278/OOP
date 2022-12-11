#include <iostream>
using namespace std;

class Num {
	private:
		int Arr[10];
		int counter;
		
	public:
		Num() {
			counter = 0;
		}
		
	void getNum( int N ) {
		if ( counter >= 10 ) {
			return;
		} else {
			Arr[counter] = N;
			counter++;
		}
	}
	
	void findAndReplace (int num1, int num2) {
		int i;
		for ( i = 0; i < counter; i++ ) {
			if ( Arr[i] == num1 ) {
				Arr[i] = num2;
			}
		}
	}
	
	void checkNum( void ) {
		int i;
		for ( i = 0; i < counter; i++ ) {
			cout << Arr[i] << ", ";
		}
		
	}
};

int main() {
	Num Obj;
	int num, a, b, opt = 1;
	
	while ( opt != 0 ) {
		cout << "\nPress 1 to Get Numbers." << endl;
		cout << "Press 2 to Display Numbers." << endl;
		cout << "Press 3 to Find and Replace Numbers." << endl;
		cout << "Press 0 to Exit." << endl;
		cout << "Enter Your Choice: ";
		cin >> opt;
		
		switch ( opt ) {
			case 1:
				for ( int i = 0; i < 10; i++ ) {
					cout << "\nEnter a Number: ";
					cin >> num;
					Obj.getNum(num);
				}
				break;
				
			case 2:
				cout << "\nNumbers are: ";
				Obj.checkNum();
				cout << endl;
				break;
				
			case 3:
				cout << "\nEnter Number to Replace: ";
				cin >> a;
				cout << "\nEnter Number to Replace With: ";
				cin >> b;
				Obj.findAndReplace(a, b);
				break;
		}
	}
	
	return 0;
}
