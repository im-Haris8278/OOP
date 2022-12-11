#include<iostream>
using namespace std;

class Even{
	private:
		int EN[25];
		int counter;
		
	public:
		Even() {
			counter = 0;
		}
		
		void findEven( int num ) {
			int i;
			for ( i = num; i > 0; i-- ) {
				if ( i % 2 == 0 ) {
					EN[counter] = i;
					counter = counter + 1;
				}
			}
		}
		
		void viewEven() {
			int i;
			for ( i = 0; i < counter; i++ ) {
				cout << EN[i] << ", ";
			}
		}
};

int main() {
	int i;
	Even Obj;
	
	cout << "Enter a Number: ";
	cin >> i;
	if ( i > 0 && i < 51 ) {
		Obj.findEven(i);
	}
	
	cout << "Here is the Output: ";
	Obj.viewEven();
	
	return 0;
}
