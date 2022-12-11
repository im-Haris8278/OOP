#include<iostream>
using namespace std;

class Even{
	private:
		int EN[25];
		int counter;
		
	public:
		Even(){
			counter=0;
		}
		
		bool isRangeValid(int a, int b){
			if (a > b){
			    cout << "Invalid." << endl;
				return false;
			}
			
			if (a < 0 || b < 0 ) {
				cout << "Invalid." << endl;
				return false;
			}
			
			if (((b - a)/4) > 25 ){
				cout << "Invalid." << endl;
				return false;
			}
			
			return true;
		}
		
		int findEven(int n1, int n2 ){
			int i;
			if (n1 % 2 == 0){
				for(i=n1; i<=n2; i+4 ){
					EN[counter++]=i;
				}
			}
		}
		
		void viewEven(){
			int i;
			for ( i = 0; i < counter; i++){
				cout << EN[i] << ", ";
			}
		}
};

int main(){
	int num1, num2, i;
	int opt = 0;
	Even Obj;
	
	while( opt != 0 ) {
		cout << "Press 1 for Storing Alternate Even Numbers." << endl;
		cout << "Press 2 for Viewing Stored Even Numbers." << endl;
		cout << "Press 0 to Exit."<< endl;
		cout << "Enter Your Choice: ";
		cin >> opt;
		
		switch( opt ){
			case 1:
				cout << "Enter First Number: ";
				cin >> num1;
				cout << "Enter Second Number: ";
				cin >> num2;
				if ( Obj.isRangeValid(num1, num2) ) {
					Obj.findEven( num1, num2 );
				}
				break;
				
			case 2:
				Obj.viewEven();
				break;
		}
	}
	
	return 0;
}
