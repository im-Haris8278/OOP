#include <iostream>
using namespace std;

class Num {
	private:
		int Arr[10];
		int counter;
		int numFound;
		
	public:
		Num() {
			counter = 0;
			numFound = 0;
		}
		
	void getNum( int N ) {
		if ( counter >= 10 ) {
			return;
		} else {
			Arr[counter] = N;
			counter++;
		}
	}
	
	void checkNum( void ) {
		int i;
		for ( i = 0; i < counter; i++ ) {
			if ( ( Arr[i] % 2 == 0 || Arr[i] % 3 == 0 ) && Arr[i] % 4 != 0 ) {
				numFound++;
				//cout << Arr[i] << ", ";
			}
		}
		cout << "There are " << numFound << " Numbers Found.";
	}
};

int main() {
	Num Obj;
	int num, opt = 1;
	
	while ( opt != 0 ) {
		cout << "\nPress 1 to Get Numbers." << endl;
		cout << "Press 2 to Display Numbers." << endl;
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
		}
	}
	
	return 0;
}
