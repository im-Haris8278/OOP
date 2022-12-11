#include<iostream>
#include<stdlib.h>
using namespace std;


int main(){
	
	int arr[30],size,i,position;
	
	cout<<"Enter Size of array ( Max:30 ): ";
	cin>>size;

	cout<<"Enter the Numbers: \n";
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the position from where you want to delete an element:";
	cin>>position;
	
	for(i=position-1;i<size;i++){
		arr[i]=arr[i+1];
	}
	size--;
	
	for(i=0;i<size;i++){
		cout<<" "<<arr[i];
	}
	
}
