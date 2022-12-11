#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
	int arr[10], i=0, even=0;
	
	cout << "Enter 10 Numbers: \n";
	for( i = 0; i < 10; i++ ) {
		cin>>arr[i];
	}
	
	for ( i = 0; i < 10; i++ ) {
		if ( arr[i] % 2 == 0 ) {
			even = even * 0;
			cout << even << " ";;
		} else {
			cout << arr[i] << " ";
		}
	}
}
