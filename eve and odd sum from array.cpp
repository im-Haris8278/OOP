#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int arr[10], even=0, odd=0, i=0;
	
	cout << "Enter 10 Numbers: \n";
	for ( i = 0; i < 10; i++ ) {
		cin >> arr[i];
	}
	
	for ( i = 0; i < 10; i++ ) {
		if ( arr[i] % 2 == 0 ) {
			even = even + arr[i];
		} else {
			odd = odd + arr[i];
		}
	}
	
	cout << "Sum of Even Numbers is: " << even << endl;
	
	cout << "Sum of Odd Numbers is: " << odd << endl;
	
	return 0;
}
