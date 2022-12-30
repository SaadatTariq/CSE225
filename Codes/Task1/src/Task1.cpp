#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter Size: ";
	cin>>n;
	int *arr = new int[n];
	cout<<"Enter the elements:"<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"The Elements are: "<< endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
	delete[] arr;
	return 0;
}
